/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:18:50 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 17:27:45 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const char *p1;
	const char *p2;
	size_t i;

	p1 = (const char *)s1;
	p2 = (const char *)s2;
	i = 0;
	while(i < n)
	{
		if (p1[i] != p2[i])
			return ((unsigned char)p1[i] - (unsigned char)p2[i]);
		i++;
	}
	return (0) ;
}