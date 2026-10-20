/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   somedigitsalph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:27:45 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 18:27:48 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

void print_number(int n)
{
    char c;

    if (n > 9)
        print_number(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int sum;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    i = 0;
    while (argv[1][i])
    {
        if (is_digit(argv[1][i]))
        {
            sum = 0;
            while (is_digit(argv[1][i]))
            {
                sum += argv[1][i] - '0';
                i++;
            }
            print_number(sum);
        }
        else
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }

    write(1, "\n", 1);
    return (0);
}