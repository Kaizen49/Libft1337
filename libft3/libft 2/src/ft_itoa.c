/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:16:37 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/18 17:49:56 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_itoa(int n)
{
    char *result;
    long    nb;
    long    temp;
    size_t sign;
    size_t len;
    
    nb = n;
    sign = 0;
    if (nb < 0)
    {   
        nb = -nb;
        sign = 1;
    }
    temp = nb;
    len = 1;
    while (temp >= 10)
    {
        temp /= 10;
        len++;
    }
    result = malloc (sizeof(char) * (len + sign + 1));
    if (!result)
        return (NULL) ;
    result [len + sign] = '\0';
    while (len > 0)
    {
        result[len - 1 + sign] = (nb % 10) + '0';
        nb /= 10;
        len--;
    }
    if (sign)
        result[0] = '-';
    
    return (result);
}
