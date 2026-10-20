int ft_atoi(char *str)
{
    int i;
    int result=0;
    int sign = 1;
    i = 0;

    while (str[i]== ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str [i] == '\r')
    {
            i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

#include <stdio.h>
int main()
{
    char tab[] = " -4536";
    int result = ft_atoi(tab);
    printf("%d",result);
}