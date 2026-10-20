/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:34:14 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/19 16:34:54 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0 ;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++ ;
	}
	dest[i] = '\0' ;
	return (dest);
}

char	*ft_strcopy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}
#include<unistd.h>
char ft_putstr(char *str)
{
	int i =0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}



int main()
{
	char *res;
	char tab[]="ok lfdgdhgdhg";
	char *result = ft_strcopy(res,tab);
ft_putstr(result);
	
}

