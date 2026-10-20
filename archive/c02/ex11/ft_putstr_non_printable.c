/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 18:33:17 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/02 21:11:43 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	c;
	int				i;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		c = (unsigned char) str[i];
		if (c < 32 || c > 126)
		{
			write (1, "\\", 1);
			write (1, &hex[c / 16], 1);
			write (1, &hex[c % 16], 1);
		}
		else
			write (1, &c, 1);
		i++;
	}
}
