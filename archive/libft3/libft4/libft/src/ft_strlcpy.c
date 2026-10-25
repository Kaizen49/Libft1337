/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:08:32 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 19:57:31 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dstsize == 0)
		return (len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	dst[10];
// 	const char	*src = "Bonjour";
// 	size_t	ret;

// 	ret = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Destination : %s\n", dst);
// 	printf("Valeur retour : %zu\n", ret);
// 	return (0);
// }