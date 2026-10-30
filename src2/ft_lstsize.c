/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:17:08 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/24 18:36:44 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;

// 	first = ft_lstnew("Premier");
// 	second = ft_lstnew("Deuxieme");
// 	third = ft_lstnew("Troisieme");

// 	if (!first || !second || !third)
// 		return (free(first), free(second), free(third), 1);
// 	first->next = second;
// 	second->next = third;

// 	printf("Taille de la liste : %u\n", ft_lstsize(first));
// 	printf("Taille d'une liste vide : %u\n", ft_lstsize(NULL));

// 	free(third);
// 	free(second);
// 	free(first);
// 	return (0);
// }