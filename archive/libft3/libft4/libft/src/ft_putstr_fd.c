/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:23:30 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/20 17:33:16 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
// #include <fcntl.h>
// #include <stdio.h>

// int main(void)
// {
//     int fd;

//     printf("Le programme demarre\n");

//     fd = open("fz.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         perror("Erreur open");
//         return (1);
//     }

//     printf("Fichier ouvert, fd = %d\n", fd);

//     ft_putstr_fd("Bonjour !\n", fd);

//     close(fd);
//     printf("Ecriture terminee\n");

//     return (0);
// }