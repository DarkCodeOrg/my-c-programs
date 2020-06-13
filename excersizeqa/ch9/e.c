#include<stdio.h>
#include<math.h>


int area(int ,int ,int ,double *);  //function declaration 
int main ()
//this program is written to find the area of a triangle
//using a function ,pointers and a mixed functon call 

{
    int a,b,c;
    double ar;

    printf("enter the length of the three sides of the triangle :");
    scanf("%d %d %d",&a,&b,&c);

    area(a,b,c,&ar);    //mixed function call 

    printf("the area of the triangle is : %f",ar);
}
#include<math.h>

int area(int x,int y,int z,double *ar)
{
    #include<math.h>

    double s;
    s = (x+y+z)/2 ;
    *ar = sqrt(s*(s-x)*(s-y)*(s-z));

}