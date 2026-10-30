/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:31:37 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/24 18:14:42 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("Bonjour");
// 	if (!node)
// 		return (1);
// 	printf("Content : %s\n", (char *)node->content);
// 	printf("Next : %p\n", (void *)node->next);
// 	free(node);
// 	return (0);
// }
