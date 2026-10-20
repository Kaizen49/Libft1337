/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 21:23:06 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/24 18:24:43 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int checkbase(char *base)
    {
        int i;
        int j;

        i = 0;
        while (base[i])
        {
            if (base[i] == '+' || base[i] == '-')
                return (1);
            if (!(base[i] >= 'a' && base[i] <= 'z') 
                    && !(base[i] >= 'A' && base[i] <= 'Z') && !(base[i] >= '0' && base[i] <= '9'))
                return (1);
            i++;
        }
        i = 0;
        while (base[i])
        {
            j = i +1;
            if (base[i] == base[j])
                return (1);
            i++;
        }
        return (0);
        
    }
    
 int lenbase(char *base)
    {   
        int i;
        
        i = 0;
        while (base[i])
        {
            i++;
        }
        return i;
    }

int charinbase(char c, char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}
int ft_atoi_base(char *str, char *base)
{
    int i;
    int len;
    int result;
    int sign;
    
    
    result = 0;
    sign = 1;
    len = lenbase(base);
    i =0;
    if (len < 2 || checkbase(base))
        return (0);
    
    while(str[i]== ' ' || str[i]== '\t' || str[i]== '\v' || str[i]== '\r'|| str[i]== '\n' || str[i]== '\f')
            i++;
    
    while(str[i] =='+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] && charinbase(str[i],base) >= 0)
    {
        result = result * len + charinbase(str[i],base);
        i++;
    }
    return result * sign;
    
    
}

#include <stdio.h>
int main ()
{
    printf("%d",ft_atoi_base("h","0123456789abcdef"));
    printf("%d",checkbase("0123456789abcdef"));
}
    
    