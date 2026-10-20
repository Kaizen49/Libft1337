/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alenghth.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 22:00:46 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 22:01:22 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

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
            i++;
            
            // Check if there's a number following
            if (argv[1][i] >= '0' && argv[1][i] <= '9')
            {
                count = argv[1][i] - '0';
                i++;
            }
            else
            {
                count = 1;
            }
            
            // Print the character 'count' times
            while (count > 0)
            {
                write(1, &c, 1);
                count--;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}