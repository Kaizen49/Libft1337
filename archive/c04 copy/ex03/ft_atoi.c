/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:27:54 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/24 14:00:05 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int result;
	int sign;
	
	result = 0;
	sign = 1;
	i = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;

	while(str[i] =='-' || str[i] == '+')
	{
		if (str[i] =='-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return result * sign;
 
}