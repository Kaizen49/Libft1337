/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:55:39 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/19 17:45:45 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			return (1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
		}
		else
			return (0);
		i++;
	}
}




#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_putnbr(nb);
		return ;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0'); 
}

int main()
{
	char tab[]="ghfhdfgdhfghA";
	ft_putnbr(ft_str_is_alpha(tab));
	
	
}
