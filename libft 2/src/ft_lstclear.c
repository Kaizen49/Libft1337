/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:54:37 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/19 16:25:55 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *node;
    t_list  *next;
    
    if (!lst)
        return;
    node = *lst;
    
    while(node)
    {
        next = node ->next;
        ft_lstdelone(node, del) ;
        node = next ;
        
    }
    *lst =  NULL ;
        
}