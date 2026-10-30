/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:48:12 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/25 12:19:09 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// #include "libft.h"
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(NULL);
// 	ft_lstdelone(node, free);
// 	return (0);
// }