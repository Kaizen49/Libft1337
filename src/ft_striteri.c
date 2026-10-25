/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:29:35 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 16:47:49 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void    ft_tolower_char(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'A' && *c <= 'Z')
//         *c = *c + 32;
// }

// #include <stdio.h>

// int main(void)
// {
//     char    s[] = "ABDELHAMID MERGHAD";

//     printf("BEFORE ITERATION: %s\n", s);
//     ft_striteri(s, ft_tolower_char);
//     printf("AFTER ITERATION: %s\n", s);
//     return (0);
// }
