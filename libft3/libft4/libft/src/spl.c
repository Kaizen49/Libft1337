/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:39:11 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 14:51:39 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_count(char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c &&  (i == 0 || s[i-1] == c))
			count++;
		i++;
	}
	return (count) ;

}

char *ft_copy(char *s, size_t start, size_t end)
{
	char *result;
	size_t	i;

	result = malloc (sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL) ;
	
	
	i = 0;
	while (start < end)
	{
		result[i++] = s[start++] ;
		
		
	}
	result [i] = '\0' ;
	return (result) ;
	
}

void ft_free(char **result, size_t j)
{
	while (j > 0)
		free (result[--j]);
	free (result);
}
size_t ft_fill (char **res, char *s, char c)
{

	size_t i;
	size_t j;
	size_t start;
	size_t end ;
	
	i = 0;
	j = 0;

	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		if (s[i])
		{
		while (s[i] && s[i] != c)
			i++;
		res[j]= ft_copy(s, start, i);
		if(!res[j])
			return ((ft_free(res, j), (size_t) -1));
		j++;
		}
		
	}
	res[j] = NULL ;
	return (j) ;
}


char **ft_sp(char *s, char c)
{
	char **result;
	size_t count;

	if (!s)
		return (NULL);
	
	count = ft_count(s, c);
	
	result = malloc ((sizeof (char*)) *  (count + 1));
	if (!result)
		return (NULL);
	if (ft_fill(result, s, c) == (size_t) -1)
		return (NULL);
	return (result) ;
}

