/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:15:55 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/17 17:58:57 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t len;
	size_t lenj;
	char *result;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	lenj = ft_strlen(s2);
	
	result = malloc (sizeof(char) * (len + lenj + 1));
	if (!result)
		return (NULL);
	
	i  = 0;
	while(s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
	
}