/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:11:14 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/13 21:04:17 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
void ft_bzero (void *s, size_t n)
{
  ft_memset(s, 0, n);
}


int main(void)
{
    char str[10] = "Bonjour";
    int i=0;
    bzero(str, sizeof(str));
    while (i < 7)
        printf("%x\n", str[i++]);
    return 0;
}
#include <stdio.h>


// int main(void)
// {
//     int tab[5] = {1, 2, 3, 4, 5};

//     bzero(tab, sizeof(tab));

//     for (int i = 0; i < 5; i++)
//         printf("%d ", tab[i]);

//     printf("\n");
//     return 0;
// }