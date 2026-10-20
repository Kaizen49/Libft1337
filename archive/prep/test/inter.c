/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 15:35:42 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/02 16:55:46 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main (int argc, char **argv)
{
	int i;
	int j;

	
	int tab[128] = {0};
	if (argc != 3)
	{
		write (1, "\n", 1);
		return 0;
	}
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		
		while (argv[2][j])
		{
		if ((argv[1][i] ==  argv[2][j]) && !tab[argv[1][i]])
		{
			write(1, &argv[1][i], 1);
			tab[argv[1][i]] = 1;
			break;
			
		}
		j++;
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}