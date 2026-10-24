/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:55:46 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 17:04:10 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int	strncmp(const char *s1, const char *s2, size_t n)
 {
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0) ;
		i++;
	}
	return (0);
 }