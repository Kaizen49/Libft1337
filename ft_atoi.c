/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:42:07 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/28 17:50:55 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (LONG_MAX - (str[i] - '0')) / 10 && sign == 1)
			return (-1);
		if (result > (LONG_MAX - (str[i] - '0')) / 10 && sign == -1)
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
	// #include<stdio.h>
	// int main ()
	// {
	// 	char *text = "-92233720368547";
	// 	printf("\n%d", ft_atoi(text));
	// 	printf("\n%d\n",atoi(text));
	// 	// unsigned int ux =  4294967295 + 2;
	// 	// printf("UNSIGNED : %d",ux);
	// }