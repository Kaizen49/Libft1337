/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:02:21 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 15:29:05 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int main (int argc , char **argv)
{
    int i;
    int len;
    int start;
    int end;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
                i++;
        len = i;
        
        while (argv[1][len -1] == ' ' || argv[1][len - 1] == '\t')
            len--;
        end = len;
        i = end - 1;
        while ((argv[1][i]) && (argv[1][i] != ' ' && argv[1][i] != '\t'))
            i--;
        start = i + 1;
        while(start < end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
        
    }
    write(1, "\n", 1);
    return (0);
}