#include<stdio.h>


int main (void)
{
    int i,n;
    unsigned long long fac = 1;
    do
    {
    printf("enter your number :");
    scanf("%i",&n);
    }while (n<0);


for (i = n; i>=1; i--)
{

    fac *= i;
}
printf("the factorial of %i is %llu \n",n,fac);
    
    
    
}