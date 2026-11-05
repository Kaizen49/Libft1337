/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:16:19 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 11:21:00 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('7'));
// 	printf("%d\n", ft_isalnum('@'));
// 	return (0);
// }