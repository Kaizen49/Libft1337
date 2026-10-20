/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoas.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:40:56 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/02 15:42:44 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char  *ft_itoa(int nbr)
{
	long	n;
	char	*str;
	int	sign;
	int i;
	int len;
	long temp;
	
	n = nbr;

	sign  = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	temp = n;
	len = 1;
	while (temp >= 10)
	{
		temp /= 10;
		len++;
	}
	str = malloc((sign + 1 + len) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[len + sign ] = '\0';
	
	while (len > 0)
	{
		str[len + sign - 1] = (n % 10) + '0';
		n /= 10;
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