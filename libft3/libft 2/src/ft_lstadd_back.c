/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:56:23 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/19 13:39:31 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last ;
    if (!lst || !new)
        return;

    if (!(*lst))
    {
        *lst = new ;
        return ;
    }
    last = *lst;
    while (last ->next)
         last = last->next ;
    
    last ->next = new ;
    new -> next = NULL;

}