#include<stdio.h>
int main()
{ //program for finding which no is greater 
	float a,b;
	int count=2;
    while (count>0)
{
	
	printf("Enter the 1st number :");
	scanf("%f",&a);
	printf("Enter the 2nd number :");
	scanf("%f",&b);

	if(a>b)
	printf("The first number is bigger\n");
	else if(a==b)
	printf("both numbers are the same\n");
	else      
	printf("the second number is bigger\n");
              
      count--;
 }
  
return 0;
}
