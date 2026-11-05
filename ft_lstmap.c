/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:39:04 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/30 16:09:24 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*node;
	t_list	*newl;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	newl = NULL;
	while (lst)
	{
		cont = f(lst->content);
		node = ft_lstnew(cont);
		if (!node)
		{
			del(cont);
			ft_lstclear(&newl, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, node);
		lst = lst->next;
	}
	return (newl);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// void	*double_num(void *content)
// {
// 	int	*new;

// 	new = malloc(sizeof(int));
// 	if (!new)
// 		return (NULL);
// 	*new = *(int *)content * 2;
// 	return (new);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d -> ", *(int *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*newl;
// 	int		a = 1;
// 	int		b = 2;
// 	int		c = 3;

// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(&a));
// 	ft_lstadd_back(&lst, ft_lstnew(&b));
// 	ft_lstadd_back(&lst, ft_lstnew(&c));

// 	printf("Original list: ");
// 	print_list(lst);

// 	newl = ft_lstmap(lst, double_num, del);

// 	printf("Mapped list:   ");
// 	print_list(newl);

// 	ft_lstclear(&newl, del);
// 	ft_lstclear(&lst, NULL);
// 	return (0);
// }