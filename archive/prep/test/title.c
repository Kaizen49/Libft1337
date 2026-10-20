/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   title.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:25:46 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 17:25:51 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int is_letter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int new_word;

    if (argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }

    i = 1;
    while (i < argc)
    {
        j = 0;
        new_word = 1;
        while (argv[i][j])
        {
            if (is_space(argv[i][j]))
            {
                new_word = 1;
                write(1, &argv[i][j], 1);
            }
            else if (new_word && is_letter(argv[i][j]))
            {
                char c = to_upper(argv[i][j]);
                write(1, &c, 1);
                new_word = 0;
            }
            else
            {
                write(1, &argv[i][j], 1);
                new_word = 0;
            }
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}