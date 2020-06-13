#include<stdio.h>

int fibo(int);
int main()
{
    register int c = 25,i = 0;

    //this is a function to print the fibonacci sequence upto - 25 

    printf("the fibonacci sequence is as \n");

    for (int a = 1; a <= c; a++)
    {
        printf("%d\n",fibo(i));

        i++;

    }


}

int fibo(int x)
{
    if (x == 0)
        return 0;

    else if  (x == 1)
        return  1;

    else
        return (fibo(x-1)+fibo(x-2));
    
}

