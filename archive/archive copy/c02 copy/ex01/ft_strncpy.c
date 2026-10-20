/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:59:13 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/19 11:26:15 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (dest[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++ ;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++ ;
	}
	return (dest);
}
