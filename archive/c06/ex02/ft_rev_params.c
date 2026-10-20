/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:19:07 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/01 16:50:49 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[argc - i][j])
		{
			write(1, &argv[argc - i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
