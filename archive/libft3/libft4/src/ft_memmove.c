/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:34:07 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/20 17:19:39 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_forward(unsigned char *d, const unsigned char *s,
		size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

static void	ft_copy_backward(unsigned char *d, const unsigned char *s,
		size_t len)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (len == 0 || dst == src)
		return (dst);
	if (d < s)
		ft_copy_forward(d, s, len);
	else
		ft_copy_backward(d, s, len);
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// void    *ft_memmove(void *dst, const void *src, size_t len);

// int main(void)
// {
//     char str1[20] = "Hello World!";
//     char str2[20] = "Hello World!";
//     char str3[20] = "Hello World!";
//     char str4[20] = "Hello World!";

//     /* Test 1: Normal copy */
//     ft_memmove(str1, str1 + 6, 6);
//     printf("Test 1: %s\n", str1);
// 	    /* Test 2: Overlap, destination after source */
//     ft_memmove(str2 + 2, str2, 5);
//     printf("Test 2: %s\n", str2);

//     /* Test 3: Overlap, destination before source */
//     ft_memmove(str3, str3 + 2, 5);
//     printf("Test 3: %s\n", str3);

//     /* Test 4: Zero length */
//     ft_memmove(str4, str4 + 2, 0);
//     printf("Test 4: %s\n", str4);
// 	return 0;
// }