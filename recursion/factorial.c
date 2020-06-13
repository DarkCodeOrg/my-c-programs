#include<stdio.h>

//this is a program showing how to find factorial with the help of recursion 

int rec(int );
int main ()
{
    int a;
    unsigned long long fact;

    printf("enter your number ");
    scanf("%d",&a);
    fact = rec(a);
    printf("the value of factorial is %llu\n",fact);

    return 0;

}

int rec(int x)
{
    unsigned long long f ;
                        
    if (x == 1)         
        return (1);

    else
    {
        f = x*rec(x-1);    //rec function again calls itself and the out put of 
        return(f);         //this rec function is placed in  the place of rec(x-1)
                           //and again the rec(x-1) is calculated and this process continues 
    }                      //until the rec(x-1) func returns the value 1 
    
    
}