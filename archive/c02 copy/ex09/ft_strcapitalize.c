/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:17:09 by selkasba          #+#    #+#             */
/*   Updated: 2026/08/19 12:19:10 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	ft_strlowcase(str);
	i = 0;
	flag = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
			{
				str[i] -= 32;
			}
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
