/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:15:55 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 16:55:57 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_join(char *result, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	lenj;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	lenj = ft_strlen(s2);
	result = malloc(sizeof(char) * (len + lenj + 1));
	if (!result)
		return (NULL);
	ft_copy_join(result, s1, s2);
	return (result);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "dimadima ";
// 	s2 = "raja";
// 	result = ft_strjoin(s1, s2);
// 	if (!result)
// 	{
// 		printf("Error: allocation failed\n");
// 		return (1);
// 	}
// 	printf("String 1: %s\n", s1);
// 	printf("String 2: %s\n", s2);
// 	printf("Joined: %s\n", result);
// 	free(result);
// 	return (0);
// }