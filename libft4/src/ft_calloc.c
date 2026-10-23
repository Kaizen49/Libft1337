/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:09:28 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/19 19:02:03 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tocalloc;

	if (size != 0 && count > ((size_t)-1) / size)
		return (NULL);
	tocalloc = malloc(count * size);
	if (!tocalloc)
		return (NULL);
	return (ft_memset(tocalloc, 0, count * size));
}

// #include<stddef.h>
//  #include <stdio.h>
// int main ()
// {
//   printf("%lu", (size_t)-1 );
// }