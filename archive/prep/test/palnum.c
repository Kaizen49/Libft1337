/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palnum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:41:35 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 17:49:38 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_is_palindrome_num(int n)
{
    int reversed;
    int original;
    int digit;

    if (n < 0)
        return (0);

    original = n;
    reversed = 0;

    while (n > 0)
    {
        // digit = n % 10;
       
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return (original == reversed);
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_is_palindrome_num(312213));
}
