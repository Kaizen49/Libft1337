/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:06:26 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 13:21:29 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}