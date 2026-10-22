


#include "./src/libft.h"
#include <stdio.h>


int main()
{
	t_list *new;
	int	content = 12;
	new = ft_lstnew(&content);
	printf("%d", *(int *)(*new).content);
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