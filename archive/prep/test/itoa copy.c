/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:32:32 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/01 18:17:11 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		len;
	int		sign;

	nb = n;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}

	len = 1;
	if (nb == 0)
		len = 1;
	else
	{
		long temp = nb;
		while (temp >= 10)
		{
			temp /= 10;
			len++;
		}
	}

	str = malloc(sizeof(char) * (len + sign + 1));
	if (!str)
		return (NULL);

	str[len + sign] = '\0';

	while (len > 0)
	{
		str[len + sign - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}

	if (sign)
		str[0] = '-';

	return (str);
}


int main(void)
{
    printf("%s\n", ft_itoa(42));
    printf("%s\n", ft_itoa(-1234));
    printf("%s\n", ft_itoa(0));

    return (0);
}