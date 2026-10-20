/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:06:57 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/16 20:46:11 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0 ;
	j = 0 ;
	while (j < size - 1)
	{
		i = j + 1;
		while (i <= size - 1)
		{
			if (tab[j] > tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp ;
			}
			i++ ;
		}
		j++ ;
	}
}
