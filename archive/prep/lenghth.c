/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenghth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:41:47 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 21:41:53 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    char digit = (n % 10) + '0';
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    int i;
    int count;
    char c;
    
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            c = argv[1][i];
            count = 1;
            
            while (argv[1][i + count] && argv[1][i + count] == c)
                count++;
            
            write(1, &c, 1);
            
            if (count > 1)
                ft_putnbr(count);
            
            i += count;
        }
    }
    write(1, "\n", 1);
    return 0;
}