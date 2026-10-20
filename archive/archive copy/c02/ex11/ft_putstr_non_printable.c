/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 18:33:17 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/25 21:29:12 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    char     hex[] = "0123456789abdef";
    unsigned char    c;
    int i;
    
   i = 0;
   while (str[i])
   {
        c = (unsigned char) str[i];
        if (c < 32 || c >126)
        {
            write (1,"\\",1);
            write (1,&hex[c / 16],1);
            write (1,&hex[c % 16],1);
        }
        else
            write (1,&c,1);
        
        i++;
   } 
}
#include <stdio.h>
int main()
{
    char str[] = "hello world \xab ,good morning?";
    ft_putstr_non_printable(str);
    printf("%s",str);
}