/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dice.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 11:54:46 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 11:54:49 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	has_pip(int die, int row, int col)
{
	if (die == 1)
		return (row == 1 && col == 1);
	if (die == 2)
		return ((row == 0 && col == 0)
			|| (row == 2 && col == 2));
	if (die == 3)
		return ((row == 0 && col == 0)
			|| (row == 1 && col == 1)
			|| (row == 2 && col == 2));
	if (die == 4)
		return ((row == 0 && (col == 0 || col == 2))
			|| (row == 2 && (col == 0 || col == 2)));
	if (die == 5)
		return ((row == 0 && (col == 0 || col == 2))
			|| (row == 1 && col == 1)
			|| (row == 2 && (col == 0 || col == 2)));
	if (die == 6)
		return (col == 0 || col == 2);
	return (0);
}

void	print_die_line(int die, int row)
{
	int	col;

	if (row == 0 || row == 4)
	{
		write(1, "+-------+", 9);
		return ;
	}
	write(1, "|", 1);
	col = 0;
	while (col < 3)
	{
		write(1, " ", 1);
		if (has_pip(die, row - 1, col))
			write(1, "o", 1);
		else
			write(1, " ", 1);
		col++;
	}
	write(1, " |", 2);
}

int	valid_die(char *str)
{
	if (str[0] < '1' || str[0] > '6')
		return (0);
	if (str[1] != '\0')
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	row;

	if (argc == 1)
	{
		write(1, "Usage: ./ft_dice <1-6> [1-6] ...\n", 35);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (!valid_die(argv[i]))
		{
			write(1, "Error: Invalid die\n", 19);
			return (0);
		}
		i++;
	}
	row = 0;
	while (row < 5)
	{
		i = 1;
		while (i < argc)
		{
			print_die_line(argv[i][0] - '0', row);
			if (i < argc - 1)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		row++;
	}
	return (0);
}