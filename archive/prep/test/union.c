/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 16:58:24 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/03 14:53:03 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main (int argc, char **argv)
{
	int tab[128]= {0};
	int i;
	int j;
	
	if (argc == 3)
	{   
		i = 0;
		while (argv[1][i])
		{
			if (!tab[argv[1][i]])
			{
				write (1, &argv[1][i], 1);
				tab[argv[1][i]] = 1;
			}
			i++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (!tab[argv[2][j]])
			{
				write (1, &argv[2][j], 1);
				tab[argv[2][j]] = 1;
				
				
			}
			j++;
		}
		
	}
	write (1, "\n", 1);
	return 0;
	
}