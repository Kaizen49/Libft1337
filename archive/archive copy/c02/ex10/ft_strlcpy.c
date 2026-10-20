/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:59:16 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/25 18:25:57 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned len_src;
	
	i=0;
	while(src[i])
	{
		i++;
	}
	len_src =i;
	i = 0;
	if (size > 0)
		{
			while(src[i] && i < size-1)
				{
					dest[i] = src[i];
					i++;
				}
				dest[i] = '\0';
		 }
	return len_src;
}