/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:50:05 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 16:02:15 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;
	
	i = 0;
	lensrc = 0;
	while (src[lensrc])
		lensrc++;
	while(dst[i] && i < dstsize)
		i++;
	lendst = i;
	if (lendst == dstsize)
		return (lensrc + lendst);
	
	j = 0;
	while(src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lensrc + lendst);
	
}
