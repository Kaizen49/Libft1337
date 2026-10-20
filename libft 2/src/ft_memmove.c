/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:34:07 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 13:03:20 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	unsigned const char *s;
	
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	i = 0;

	if (len == 0 || s == d)
		return (d);
	if (d < s)
	{
		while(i < len)
		{
			d[i] = s[i];
			i++;
		}

	}
	else 
	{
		while(len > 0)
		{
			len--;
			d[len] = s[len];			
		}

		
	}
	return (d);
}

#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
    char str1[20] = "Hello World!";
    char str2[20] = "Hello World!";
    char str3[20] = "Hello World!";
    char str4[20] = "Hello World!";

    /* Test 1: Normal copy */
    ft_memmove(str1, str1 + 6, 6);
    printf("Test 1: %s\n", str1);
	    /* Test 2: Overlap, destination after source */
    ft_memmove(str2 + 2, str2, 5);
    printf("Test 2: %s\n", str2);

    /* Test 3: Overlap, destination before source */
    ft_memmove(str3, str3 + 2, 5);
    printf("Test 3: %s\n", str3);

    /* Test 4: Zero length */
    ft_memmove(str4, str4 + 2, 0);
    printf("Test 4: %s\n", str4);
	return 0;
}