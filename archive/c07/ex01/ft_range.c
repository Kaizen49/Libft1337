/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 16:53:04 by selkasba          #+#    #+#             */
/*   Updated: 2026/09/02 20:14:58 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	str = malloc((size) * sizeof(int));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
