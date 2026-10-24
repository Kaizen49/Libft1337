/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:42:07 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/13 19:09:47 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result	= 0;
	
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1 ;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result*10 + (str[i] - '0');
		i++;
	}
	return (result*sign);

}
	// #include<stdio.h>
	// int main ()
	// {
	// 	char *text = "999";
	// 	printf("%d", ft_atoi(text));
	// }
		
		

	
	
