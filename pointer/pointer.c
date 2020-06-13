#include<stdio.h>

//using call by reference we can make a functon return more than 1 value
//such an example has been discussed below 

void areaperi(int,float *,float *);
int main()
{
    int rad;
    float area,peri;
    printf("enter the radius of the circle :");
    scanf("%d",&rad);
    printf("the value currntly at area and peri is %f and %f\n\n\n",area,peri);
    printf("the address of area and peri is %p and %p\n\n\n",&area,&peri);
    
    
    areaperi(rad,&area,&peri);

    
    printf("area = %.4f  perimeter = %.4f\n\n\n",area,peri);
    return 0;
}

//here pointer a (*a) is reffering to the address of variable area(&area)
//and ponter p (*p) s reffering to the address of variable peri(peri) 


void areaperi(int r,float *a,float *p)
{
    *a = 3.14*r*r;
    *p = 2*3.14*r;
}
