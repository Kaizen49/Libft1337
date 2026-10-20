/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pyramid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:07:19 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 21:35:00 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    result = 0;


    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result ;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main (int argc, char **argv)
{
    int i;
    int k;
    int j;
    int n;
    
    if (argc ==2)
    {
    i = 1;
    n = ft_atoi(argv[1]);
    while(i < n)
    {
        
        j = 1;
        while (j <= n - i)
        {
            ft_putchar(' ');
            j++;
        }
        k = 1;
        while(k <= 2 * i - 1)
        {
            ft_putchar('*');
            k++;
        }
        ft_putchar('\n');
        i++;
        
    }
    }
    return 0;
}
// int main ()
// {
//     // printf("%d", ft_atoi("25"));

    
    
// }