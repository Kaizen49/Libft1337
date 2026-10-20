/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 17:11:13 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/24 17:57:44 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int   ft_check(char *base)
{
   int   i;
   int   j;

   i = 0;
   while (base[i])
   {
      if  (base[i] == '-' || base[i] == '+')
         return (1);
      i++;
   }
   while (base[i])
   {
      j = i + 1;
      while (base[j])
      {
         if (base[i] == base[j]) 
            return (1);
         j++;
      }
      i++;
   }
   return (0);
}

int   ft_strlen(char *base)
{
   int   len;
   len = 0;
   while (base[len])
   {
    len++;
   }
   return (len);
}

void    ft_putnbr_base(int nbr, char *base)
{
   long  n;
   int   len;
   
   n = nbr;
   len = ft_strlen(base);
   if (len < 2 || ft_check(base))
      return ;
   
   if (n < 0)
   {
    n = -n;
    write(1, "-", 1);
   }
   if (n >= len)
      ft_putnbr_base(n / len, base);
   write(1, &base[n % len], 1);
}

int main()
{
   ft_putnbr_base(2,"1");
}