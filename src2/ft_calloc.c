/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:09:28 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/29 17:29:41 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tocalloc;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	tocalloc = malloc(count * size);
	if (!tocalloc)
		return (NULL);
	return (ft_memset(tocalloc, 0, count * size));
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	int	*tab;
// 	int	i;

// 	tab = ft_calloc(-1,-1);
// 	*tab = 80;
// 	printf("%d ", *tab);
// 	free(tab);
// 	tab = calloc(1,sizeof(int));
// 	*tab = 80;
// 	printf("%d ", *tab);
// 	free(tab);
// 	return (0);
// }
