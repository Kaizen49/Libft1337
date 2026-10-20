#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nbr;
    nbr = 5 ;
	int	*p1;
    p1 = &nbr;

	
	printf("%p\n", &nbr);
    printf("%d\n",nbr);
    printf("%p\n",p1);
    printf("%d\n",*p1);
    printf("%p",&p1);

  

	return (0);
}
