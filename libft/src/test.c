/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:04:06 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/22 20:15:52 by selkasba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     printf("%zu\n", ft_strlen("Hello"));
//     return (0);
// }

// int	main(void)
// {
// 	char	*sub;

// 	sub = ft_substr("Hello World", 6, 5);
// 	printf("Test 1: %s\n", sub);
// 	free(sub);

// 	sub = ft_substr("Hello", 1, 3);
// 	printf("Test 2: %s\n", sub);
// 	free(sub);

// 	sub = ft_substr("Hello", 0, 2);
// 	printf("Test 3: %s\n", sub);
// 	free(sub);

// 	sub = ft_substr("Hello", 2, 10);
//     if (sub)
//     {
// 	    printf("Test 4: %s\n", sub);
// 	    free(sub);
//     }
//     else
// 	    printf("Test 4 returned NULL\n");

// 	sub = ft_substr("Hello", 10, 3);
// 	printf("Test 5: '%s'\n", sub);
// 	free(sub);
//     // sub = ft_substr("Hello", 10, 3);
//     // if (sub)
//     // {
// 	//     printf("Test 5: '%s'\n", sub);
// 	//     free(sub);
//     // }
//     // else
// 	//     printf("Test 5 returned NULL\n");

// 	sub = ft_substr("Hello", 1, 0);
// 	printf("Test 6: '%s'\n", sub);
// 	free(sub);

// 	sub = ft_substr("", 0, 3);
// 	printf("Test 7: '%s'\n", sub);
// 	free(sub);

// 	sub = ft_substr(NULL, 0, 3);
// 	printf("Test 8: %s\n", sub ? sub : "NULL");
// 	free(sub);

// 	return (0);
// }


// int	main(void)
// {
// 	char	*result;

// 	result = ft_strjoin("Hello ", "World!");
// 	printf("Test 1: %s\n", result);
// 	free(result);

// 	result = ft_strjoin("", "Hello");
// 	printf("Test 2: %s\n", result);
// 	free(result);

// 	result = ft_strjoin("Hello", "");
// 	printf("Test 3: %s\n", result);
// 	free(result);

// 	result = ft_strjoin("", "");
// 	printf("Test 4: '%s'\n", result);
// 	free(result);

// 	result = ft_strjoin("42", " School");
// 	printf("Test 5: %s\n", result);
// 	free(result);

// 	result = ft_strjoin(NULL, "Hello");
// 	printf("Test 6: %s\n", result ? result : "NULL");
// 	free(result);

// 	result = ft_strjoin("Hello", NULL);
// 	printf("Test 7: %s\n", result ? result : "NULL");
// 	free(result);

// 	return (0);
// }

// #include <string.h>
// int main ()
// {
//     char *result;
    
//     result = ft_strtrim("okodima raja kok", "oko");
//     printf("here is the fucking result %s", result);

//     return 0;
// }
// int	main(void)
// {
// 	char	*result;

// 	result = ft_strtrim("xxhelloxx", "x");
// 	printf("Test 1: '%s'\n", result);
// 	free(result);

// 	result = ft_strtrim("xxhelloxworldxx", "x");
// 	printf("Test 2: '%s'\n", result);
// 	free(result);

// 	result = ft_strtrim("xxxxx", "x");
// 	printf("Test 3: '%s'\n", result);
// 	free(result);

// 	result = ft_strtrim("", "abc");
// 	printf("Test 4: '%s'\n", result);
// 	free(result);

// 	result = ft_strtrim("hello", "");
// 	printf("Test 5: '%s'\n", result);
// 	free(result);

// 	result = ft_strtrim("abcHelloabc", "abc");
// 	printf("Test 6: '%s'\n", result);
// 	free(result);

// 	result = ft_strtrim("  hello world  ", " ");
// 	printf("Test 7: '%s'\n", result);
// 	free(result);

// 	result = ft_strtrim(NULL, "x");
// 	printf("Test 8: %s\n", result ? result : "NULL");
// 	free(result);

// 	return (0);
// }

// #include <stdio.h>
// int main ()
// {
// 	char *s = "hello , zoofjfjh, jhfdhfg";
// 	char **strs;
// 	strs = ft_split(s, 'h');
// 	while(*strs)
// 		printf("%s\n", *strs++);
// }

// #include <stdio.h>
// int main ()
// {
// 	printf("%s", ft_itoa(-46546));
// 	return (0);
// }


#include "libft.h"

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";

	ft_memset(str1, 'A', 3);
	memset(str2, 'A', 3);

	printf("ft_memset: %s\n", str1);
	printf("memset:    %s\n", str2);
	return (0);
}