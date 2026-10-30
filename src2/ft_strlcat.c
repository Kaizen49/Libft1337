/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:50:05 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 19:51:47 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;

	i = 0;
	lensrc = 0;
	while (src[lensrc])
		lensrc++;
	while (i < dstsize && dst[i])
		i++;
	lendst = i;
	if (lendst == dstsize)
		return (lensrc + lendst);
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lensrc + lendst);
}

// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	dst[20] = "Bonjour ";
// 	char	src[] = "le monde";
// 	size_t	ret;

// 	ret = ft_strlcat(dst, src, sizeof(dst));
// 	printf("Destination : %s\n", dst);
// 	printf("Valeur retour : %zu\n", ret);
// 	return (0);
// }
