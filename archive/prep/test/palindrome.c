/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:22:18 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/02 18:03:31 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main (int argc, char **argv)
{
	int i;
	int len;
	
	if ( argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			i++;
		}
		len = i;

		i = 0;
		while (i < len )
		{
			if (argv[1][i] != argv[1][len - 1])
			{
				write (1, "\n", 1);
				return 0;
			}
			i++;
			len--;
		}
		
	}
	write(1,argv[1], i + len + 1);
	write (1, "\n", 1);
	return 0;
}