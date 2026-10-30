/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:41:40 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/24 18:25:17 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*last;

// 	first = ft_lstnew("Premier");
// 	second = ft_lstnew("Deuxieme");
// 	third = ft_lstnew("Troisieme");

// 	first->next = second;
// 	second->next = third;

// 	last = ft_lstlast(first);
// 	printf("Dernier element : %s\n", (char *)last->content);

// 	free(first);
// 	free(second);
// 	free(third);
// 	return (0);
// }
