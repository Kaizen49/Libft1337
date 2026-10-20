/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:17:41 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/24 14:34:31 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
        {
            write(1,"-2147483648", 11);
            return;
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
            return;
        }
        
    ft_putnbr(nb/10);
    ft_putchar((nb % 10) + '0');
}

int main ()
{
    ft_putnbr(215554);
}