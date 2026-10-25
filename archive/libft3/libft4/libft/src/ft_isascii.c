/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:31:59 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 11:23:45 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('A'));
// 	printf("%d\n", ft_isascii(127));
// 	printf("%d\n", ft_isascii(128));
// 	return (0);
// }