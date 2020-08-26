#include<stdio.h>

//using call by reference we can make a functon return more than 1 value
//such an example has been discussed below 

void  pointersdemo(){
    int *ptr;
    int a=100;
    ptr = &a;
    printf("the value stored at pointer variable ptr (*ptr) is = %d\n\n",*ptr);

}

void adavancedPointerNotation(){
    int nums[2][3] = {{1,2,3},{4,5,6}};

    // nums[i][j] = *(*(nums + i) + j);  /* this is the general formula*/

    printf("nums[0][0] = %d\n",*(*nums));
    printf("nums[0][1] = %d\n",*(*nums + 1));
    printf("nums[0][2] = %d\n",*(*nums + 2));
    printf("nums[1][0] = %d\n",*(*(nums+1)));
    printf("nums[1][1] = %d\n",*(*(nums+1) + 1));
    printf("nums[1][2] = %d\n",*(*(nums+1) + 2));
}
void pointerToAPointer(){

    // this code snippet will have a pointer to a variable and a pointer to that pointer

    int b = 10;
    int *ptr;
    int **ptr2;
    
    ptr = &b;
    ptr2 = &ptr;
    
    // the * operator returns the value of the variable pointed to by its operand

    printf("the value of the variable a is : %d\n",b);
    printf("the address of a is : %p\n",&b);
    printf("the value at *ptr = %d\n",*ptr);
    printf("the value at **ptr2 = %d\n",**ptr2);
    
}

void areaperi(int,float *,float *);

int main()
{
    pointersdemo();
    adavancedPointerNotation();
    pointerToAPointer();

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
