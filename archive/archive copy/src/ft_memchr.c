/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:38:04 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 11:59:57 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello World";
// 	char	*ptr;

// 	ptr = ft_memchr(str, 'W', 11);
// 	if (ptr)
// 		printf("%s\n", ptr);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }