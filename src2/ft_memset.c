/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:01:59 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/30 18:30:57 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello";
//
// 	ft_memset(str1, 'A', 3);
// 	memset(str2, 'A', 3);
//
// 	printf("ft_memset: %s\n", str1);
// 	printf("memset:    %s\n", str2);
// 	return (0);
// }
//