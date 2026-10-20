/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 11:26:20 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/26 13:53:43 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0 ;
	j = size -1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp ;
		i++;
		j--;
	}
}
#include <stdio.h>

int main()
{
	int tab[6] = {1,2,3,4,5,6};
	int i = 0;
	ft_rev_int_tab(tab,6);
	while (i < 6)
		printf("%d",tab[i++]);
}