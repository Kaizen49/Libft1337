/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:16:37 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/23 11:39:23 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nlen(long nb)
{
	size_t	len;

	len = 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *result, long nb, size_t len, size_t sign)
{
	while (len > 0)
	{
		result[len - 1 + sign] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	size_t	sign;
	size_t	len;

	nb = n;
	sign = (nb < 0);
	if (sign)
		nb = -nb;
	len = nlen(nb);
	result = malloc(sizeof(char) * (len + sign + 1));
	if (!result)
		return (NULL);
	result[len + sign] = '\0';
	ft_fill(result, nb, len, sign);
	if (sign)
		result[0] = '-';
	return (result);
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(-123);
// 	if (!str)
// 		return (1);
// 	printf("%s\n", str);
// 	free(str);

// 	str = ft_itoa(0);
// 	if (!str)
// 		return (1);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }