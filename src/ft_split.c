/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:35:29 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/25 16:49:23 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	*ft_copy(const char *s, size_t start, size_t end)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

static void	ft_free_split(char **result, size_t j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

static size_t	ft_fill_split(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = ft_copy(s, start, i);
			if (!result[j])
				return (ft_free_split(result, j), (size_t) - 1);
			j++;
		}
	}
	result[j] = NULL;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	if (ft_fill_split(result, s, c) == (size_t)-1)
		return (NULL);
	return (result);
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	result = ft_split("Bonjour le monde", ' ');
// 	if (!result)
// 		return (1);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }