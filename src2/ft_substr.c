/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:48:54 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/25 16:52:39 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= lens)
		len = 0;
	if (lens - start < len)
		len = lens - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	*result;
// 	result = ft_substr("Bonjour le monde", 0, 7);
// 	printf("Test 1 : [%s]\n", result);
// 	free(result);
// 	result = ft_substr("Bonjour le monde", 8, 2);
// 	printf("Test 2 : [%s]\n", result);
// 	free(result);
// 	result = ft_substr("Bonjour", 3, 20);
// 	printf("Test 3 : [%s]\n", result);
// 	free(result);

// 	result = ft_substr("Bonjour", 10, 3);
// 	printf("Test 4 : [%s]\n", result);
// 	free(result);

// 	result = ft_substr("Bonjour", 2, 0);
// 	printf("Test 5 : [%s]\n", result);
// 	free(result);
// 	return (0);
// }