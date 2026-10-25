#include "./src/libft.h"

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


// #include <stdio.h>
// #include "./src/libft.h"

// int main(void)
// {
//     int content = 42;
//     t_list *new;

//     new = ft_lstnew(&content);
//     if (!new)
//         return (1);

//     printf("%d\n", *(int *)new->content);
//     return (0);
// }