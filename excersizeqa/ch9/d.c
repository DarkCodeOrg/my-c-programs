#include<stdio.h>


//this function is written to show how to swap the value of anything using function and pointer

int swapf(int *,int *,int *);

int main (void)
{
    int x = 5,y = 8,z = 10;
    swapf(&x,&y,&z);

    printf("the result is : x = %d y = %d z =%d \n",x,y,z);

}

int swapf(int *a,int *b,int *c)
{
    int t;
    t = *a;   //function swapping the addresses of the input variables and hence the value is changing 
    *a = *b;
    *b = *c; //here the values are rotated to the left 
    *c = t;

}

