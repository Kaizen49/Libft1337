/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:54:11 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/25 12:35:38 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;

// 	a = ft_lstnew("B");
// 	b = ft_lstnew("A");
// 	a->next = NULL;
// 	ft_lstadd_front(&a, b);
// 	printf("%s\n", (char *)a->content);
// 	printf("%s\n", (char *)a->next->content);
// 	ft_lstclear(&a, NULL);
// 	return (0);
// }