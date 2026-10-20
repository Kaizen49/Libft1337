char	*ft_strcopy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}
#include<unistd.h>
char ft_putstr(char *str)
{
	int i =0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}



int main()
{
	char *res;
	char tab[]="ok lfdgdhgdhg";
	char *result = ft_strcopy(res,tab);
    ft_putstr(result);
	
}
}