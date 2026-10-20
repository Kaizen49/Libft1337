/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:57:22 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/02 20:09:52 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	lentotal(int size, char **strs)
{
	int	i;
	int	j;
	int	lent ;

	i = 0;
	lent = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		lent = lent + j;
		i++;
	}
	return (lent);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_fill(char *str, char **strs, int *tab, char *sep)
{
	int	k;
	int	i;
	int	lens;
	int	size;

	i = 0;
	k = 0;
	size = tab[0];
	lens = tab[1];
	while (i < size)
	{
		ft_strcpy(str + k, strs[i]);
		k += lenstr(strs[i]);
		if (i != size - 1)
		{
			ft_strcpy(str + k, sep);
			k += lens;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		lent;
	int		lens;
	int		tab[2];

	if (size == 0)
	{
		return (malloc(1));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	lent = lentotal(size, strs);
	lens = lenstr(sep);
	result = malloc((lent + lens * (size -1) + 1) * sizeof(char));
	tab[0] = size;
	tab[1] = lens;
	if (!result)
		return (NULL);
	return (ft_fill(result, strs, tab, sep));
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "World", "42"};
// 	char	*result;

// 	result = ft_strjoin(3, strs, " |||");
// 	if (!result)
// 		return (1);

// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
// char	*ft_strjoin(int size, char **strs)
// {
// 	int	i;
// 	if (size == 0)
// 		return (NULL);
// 	*strs = malloc(size * sizeof(char));
// 	if (!(*strs))
// 		return (NULL);
// 	i = 0;
// 	while (**strs && i < size - 1)
// 	{	
// 		if (*strs[i] ==  ' ')
// 			*strs[i] = sep[0];
// 		i++;
// 	}
// }
// #include <stdio.h>
// int main ()
// {
// 	char strs[] = "hello world dima raja";
// 	char sep[] = ",";
// 	char *res = ft_strjoin(4,strs,sep);
// 	int i = 0;
// 	while(res[i])
// 	{

// 	printf("%s",res[i]);
// 	i++;
// 	}
// }