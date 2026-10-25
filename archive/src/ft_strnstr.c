/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:33:33 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/16 17:58:59 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    
    if (needle[0] == '\0')
        return ((char *)haystack);
    i = 0;
    while(haystack[i] && i < len)
    {
        j = 0;
        while (i + j < len && haystack[i+j] == needle[j] && needle[j] )
        {
            j++;
            if (needle[j] == '\0')
                return ((char *)&haystack[i]);
        }
        i++;
        
    }
    return (NULL);
    
}