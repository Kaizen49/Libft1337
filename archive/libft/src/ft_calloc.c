/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:09:28 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 19:33:20 by selkasba         ###   ########.fr       */
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

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	int	*tab;
// 	int	i;

// 	tab = ft_calloc(5, sizeof(int));
// 	if (!tab)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return (0);
// }

