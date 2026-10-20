/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:12:20 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/30 15:02:34 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	n;

	if (nb <= 1)
		nb = 2;
	n = 2;
	while (n < nb)
	{
		if (nb % n == 0)
		{
			nb++;
			n = 1;
		}
		n++;
	}
	return (nb);
}

int main ()
{
	printf("%d", ft_find_next_prime(102));
}