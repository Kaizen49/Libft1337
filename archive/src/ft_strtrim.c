/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:07:10 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/17 20:14:05 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_istin(char c, char const *s)
{
	int i;
	
	i = 0;
	while(s[i])
	{
		if(c == s[i])
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char *result;
	size_t i;
	size_t end;
	size_t start;
	size_t lens;
	
	if (!s1 || !set)
		return (NULL);
	lens = ft_strlen(s1);

i = 0;
while (s1[i] && ft_istin(s1[i], set))
	i++;
start = i ;
end = lens;
while (end > start && ft_istin(s1[end - 1], set))
    end--;
result = malloc (sizeof(char) * (end - start + 1));
if (!result)
	return (NULL);
i = 0;
while(start < end )
{
	result[i++] = s1[start++];
}
result[i] = '\0';
return (result);
		
}