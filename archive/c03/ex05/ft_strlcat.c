/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:04:10 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/23 13:52:33 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dst;
	unsigned int	len_src;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	len_dst = i;
	while (src[j])
		j++;
	len_src = j;
	if (size <= len_dst)
		return (size + len_src);
	j = 0;
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (len_dst + len_src);
}
