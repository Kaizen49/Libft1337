/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vox.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:12:32 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 23:41:04 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int argc, char **argv)
{
    int i, j;
    int count;
    int max_count = 0;
    char max_char;
    
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            count = 0;
            j = 0;
            while (argv[1][j])
            {
                if (argv[1][j] == argv[1][i])
                    count++;
                j++;
            }
            if (count > max_count)
            {
                max_count = count;
                max_char = argv[1][i];
            }
            i++;
        }
        write(1, &max_char, 1);
    }
    write(1, "\n", 1);
    return 0;
}