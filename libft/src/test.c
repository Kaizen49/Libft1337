/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkasba <selkasba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:04:06 by selkasba          #+#    #+#             */
/*   Updated: 2026/10/24 18:53:36 by selkasba         ###   ########.fr       */
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


// #include "libft.h"

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello";

// 	ft_memset(str1, 'A', 3);
// 	memset(str2, 'A', 3);

// 	printf("ft_memset: %s\n", str1);
// 	printf("memset:    %s\n", str2);
// 	return (0);
// }
// int main(void)
// {
//     char str[10] = "Bonjour";
//     int i=0;
//     bzero(str, sizeof(str));
//     while (i < 7)
//         printf("%x\n", str[i++]);
//     return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//     int tab[5] = {1, 2, 3, 4, 5};

//     bzero(tab, sizeof(tab));

//     for (int i = 0; i < 5; i++)
//         printf("%d ", tab[i]);

//     printf("\n");
//     return 0;
// }

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	int	*tab;
// 	int	i;

// 	tab = ft_calloc(5, sizeof(int));
// 	if (!tab)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('7'));
// 	printf("%d\n", ft_isalnum('@'));
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('A'));
// 	printf("%d\n", ft_isascii(127));
// 	printf("%d\n", ft_isascii(128));
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(-123);
// 	if (!str)
// 		return (1);
// 	printf("%s\n", str);
// 	free(str);

// 	str = ft_itoa(0);
// 	if (!str)
// 		return (1);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "Hello World";
// 	char	*ptr;

// 	ptr = ft_memchr(str, 'W', 11);
// 	if (ptr)
// 		printf("%s\n", ptr);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp("abc", "zbc", 3));
// 	printf("%d\n", ft_memcmp("abc", "abd", 3));
// 	printf("%d\n", ft_memcmp("abd", "abc", 3));
// 	return (0);
// }
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Bonjourjhh";
// 	char	dst[20];

// 	ft_memcpy(dst, src, 10);
// 	printf("%s\n", dst);
// 	return (0);
// }

// #include <stdio.h>
// #include <string.h>

// void    *ft_memmove(void *dst, const void *src, size_t len);

// int main(void)
// {
//     char str1[20] = "Hello World!";
//     char str2[20] = "Hello World!";
//     char str3[20] = "Hello World!";
//     char str4[20] = "Hello World!";

//     /* Test 1: Normal copy */
//     ft_memmove(str1, str1 + 6, 6);
//     printf("Test 1: %s\n", str1);
// 	    /* Test 2: Overlap, destination after source */
//     ft_memmove(str2 + 2, str2, 5);
//     printf("Test 2: %s\n", str2);

//     /* Test 3: Overlap, destination before source */
//     ft_memmove(str3, str3 + 2, 5);
//     printf("Test 3: %s\n", str3);

//     /* Test 4: Zero length */
//     ft_memmove(str4, str4 + 2, 0);
//     printf("Test 4: %s\n", str4);
// 	return 0;
// }

// #include "libft.h"

// int	main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putchar_fd('B', 2);
// 	return (0);
// }

// #include "libft.h"

// int	main(void)
// {
// 	ft_putendl_fd("Bonjour", 1);
// 	ft_putendl_fd("Erreur", 2);
// 	ft_putendl_fd(NULL, 1);
// 	return (0);
// }

// #include "libft.h"

// int	main(void)
// {
// 	ft_putnbr_fd(42, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-123, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }
// #include "libft.h"

// int	main(void)
// {
// 	ft_putstr_fd("Bonjour", 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd("Erreur", 2);
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	result = ft_split("Bonjour h le h  mo h nde", 'h');
// 	if (!result)
// 		return (1);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "dimadima ";
// 	s2 = "raja";
// 	result = ft_strjoin(s1, s2);
// 	if (!result)
// 	{
// 		printf("Error: allocation failed\n");
// 		return (1);
// 	}
// 	printf("String 1: %s\n", s1);
// 	printf("String 2: %s\n", s2);
// 	printf("Joined: %s\n", result);
// 	free(result);
// 	return (0);
// }

// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	dst[20] = "Bonjour ";
// 	char	src[] = "le monde";
// 	size_t	ret;

// 	ret = ft_strlcat(dst, src, sizeof(dst));
// 	printf("Destination : %s\n", dst);
// 	printf("Valeur retour : %zu\n", ret);
// 	return (0);
// }
// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	dst[10];
// 	const char	*src = "Bonjour";
// 	size_t	ret;

// 	ret = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Destination : %s\n", dst);
// 	printf("Valeur retour : %zu\n", ret);
// 	return (0);
// }

// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	str[] = "jdhgd" ;

// 	printf("Longueur : %zu\n", ft_strlen(str));
// 	printf("Longueur chaîne vide : %zu\n", ft_strlen(""));

// 	return (0);
// }
// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
// 	const char	*haystack = "Hello World jghjghghjh !";
// 	const char	*needle = "World";
// 	char		*result;

// 	result = ft_strnstr("Ubuntu", "A", 9);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");

// 	return (0);
// }

// #include <stdio.h>
// #include "libft.h"

// int	main(void)
// {
// 	const char	*s = "Hello World!";
// 	char		*result;

// 	result = ft_strrchr(s, 'o');
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");

// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*result;

// 	result = ft_strtrim("  bonjour  ", " ");
// 	printf("Resultat : [%s]\n", result);
// 	free(result);

// 	result = ft_strtrim("xxxhelloxxx", "x");
// 	printf("Resultat : [%s]\n", result);
// 	free(result);

// 	result = ft_strtrim("abcBonjourcba", "abc");
// 	printf("Resultat : [%s]\n", result);
// 	free(result);

// 	result = ft_strtrim("bonjour", " ");
// 	printf("Resultat : [%s]\n", result);
// 	free(result);

// 	result = ft_strtrim("xxxx", "x");
// 	printf("Resultat : [%s]\n", result);
// 	free(result);

// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*result;

// 	result = ft_substr("Bonjour le monde", 0, 7);
// 	printf("Test 1 : [%s]\n", result);
// 	free(result);

// 	result = ft_substr("Bonjour le monde", 8, 2);
// 	printf("Test 2 : [%s]\n", result);
// 	free(result);

// 	result = ft_substr("Bonjour", 3, 20);
// 	printf("Test 3 : [%s]\n", result);
// 	free(result);

// 	result = ft_substr("Bonjour", 10, 3);
// 	printf("Test 4 : [%s]\n", result);
// 	free(result);

// 	result = ft_substr("Bonjour", 2, 0);
// 	printf("Test 5 : [%s]\n", result);
// 	free(result);

// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('Z'));
// 	printf("%c\n", ft_tolower('b'));
// 	printf("%c\n", ft_tolower('5'));
// 	return (0);
// }
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('Z'));
// 	printf("%c\n", ft_toupper('b'));
// 	printf("%c\n", ft_toupper('5'));
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("Bonjour");
// 	if (!node)
// 		return (1);
// 	printf("Content : %s\n", (char *)node->content);
// 	printf("Next : %p\n", (void *)node->next);
// 	free(node);
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*last;

// 	first = ft_lstnew("Premier");
// 	second = ft_lstnew("Deuxieme");
// 	third = ft_lstnew("Troisieme");

// 	first->next = second;
// 	second->next = third;

// 	last = ft_lstlast(first);
// 	printf("Dernier element : %s\n", (char *)last->content);

// 	free(first);
// 	free(second);
// 	free(third);
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;

// 	first = ft_lstnew("Premier");
// 	second = ft_lstnew("Deuxieme");
// 	third = ft_lstnew("Troisieme");

// 	if (!first || !second || !third)
// 		return (free(first), free(second), free(third), 1);
// 	first->next = second;
// 	second->next = third;

// 	printf("Taille de la liste : %u\n", ft_lstsize(first));
// 	printf("Taille d'une liste vide : %u\n", ft_lstsize(NULL));

// 	free(third);
// 	free(second);
// 	free(first);
// 	return (0);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("Premier");
// 	ft_lstadd_back(&lst, ft_lstnew("Deuxieme"));
// 	ft_lstadd_back(&lst, ft_lstnew("Troisieme"));

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }