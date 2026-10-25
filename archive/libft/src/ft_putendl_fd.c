/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:27:57 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 13:02:33 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
// #include "libft.h"

// int	main(void)
// {
// 	ft_putendl_fd("Bonjour", 1);
// 	ft_putendl_fd("Erreur", 2);
// 	ft_putendl_fd(NULL, 1);
// 	return (0);
// }