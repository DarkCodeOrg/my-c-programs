#include<stdio.h>
//this program has a function which is called in main and calculates the sum and average
//of 5 numbers (integers) and returns them in main 
//chaper 9 ;excersize c ;qno a

int func(int ,int ,int ,int ,int ,float *,float *);

int main ()
{
    int l=4,m=3,n=2,o=1,p=4;
    float avg,sum;

    func(l,m,n,o,p,&sum,&avg);
    printf("the sum is %.2f\n",sum);
    printf("the average is %.3f\n",avg);

}

int func(int a,int b,int c,int d,int e,float *s,float *v)
{
    *s = a+b+c+d+e;
    *v = (*s/5) ;
}