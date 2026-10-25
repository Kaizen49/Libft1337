/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:38:04 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 17:14:07 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t i;
	
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return(0);
	
}