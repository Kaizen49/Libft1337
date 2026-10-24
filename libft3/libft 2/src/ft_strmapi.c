/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:06:29 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/18 18:28:34 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int lens;
    char *result;
    
    if(!s || !f)
        return (NULL);
    lens = ft_strlen(s);
    result = malloc (sizeof (char ) + lens + 1);
    if (!result)
        return (NULL) ;
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result [i] = '\0';
    return (result);
    
}