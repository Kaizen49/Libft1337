/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:25:40 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/24 17:45:47 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('Z'));
// 	printf("%c\n", ft_tolower('b'));
// 	printf("%c\n", ft_tolower('5'));
// 	return (0);
// }