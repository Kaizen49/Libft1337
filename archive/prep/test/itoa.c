/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:32:32 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/01 17:58:43 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
    static char buffer[12];
    int i;
    long nb;
    int sign;

    nb = n;
    i = 11;
    buffer[i] = '\0';

    if (nb == 0)
    {
        buffer[--i] = '0';
        return (&buffer[i]);
    }

    if (nb < 0)
    {
        nb = -nb;
        sign = 1;
    }

    while (nb > 0)
    {
        buffer[--i] = (nb % 10) + '0';
        nb /= 10;
    }
    if (sign)
        buffer[0] = '-';

    return (&buffer[i]);
}

int main(void)
{
    printf("%s\n", ft_itoa(4+2));
    printf("%s\n", ft_itoa(---1234));
    printf("%s\n", ft_itoa(0));

    return (0);
}
