


#include<stdio.h>
int factoriel(int n)
{
int result;
result =1;

while(n>0)
{
    result *= n;
    n--;
}
if (n<0)
{
    return 0;   
}
return result ; 
}  



int main ()
{
    printf("%d",factoriel(5));
}