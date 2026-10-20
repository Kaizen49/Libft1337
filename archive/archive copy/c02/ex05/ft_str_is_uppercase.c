/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 18:47:50 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/19 12:02:38 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				i++;
			}
			else
			{
				return (0);
			}
		}
		return (1);
	}
}
