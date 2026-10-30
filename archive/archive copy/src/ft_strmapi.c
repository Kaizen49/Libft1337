/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:06:29 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/25 12:43:26 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	lens;
	char			*result;

	if (!s || !f)
		return (NULL);
	lens = ft_strlen(s);
	result = malloc(sizeof(char) * (lens + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("BONJOUR ABC", ft_tolower);
// 	if (!str)
// 		return (1);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
