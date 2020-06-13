#include<stdio.h>

int main()
{//program for detecting prime number
    int num,i=2,count=2;
   
  while (/* condition */count>1)
  {
      /* code */
    printf("press ctrl+c to exit\n");
    printf("enter your number please :");
    scanf("%i/n",&num);
    
     while(i<=num-1)

    {
        if(num%i == 0)
        {
            printf("the number is not prime\n\n");
            break ;
        }
        i++ ;
    }
        if(i == num)
        {
            printf("the number is prime\n\n");
        }
        else if (/* condition */num == 0)
        {
            /* code */
            printf("learn maths u fool\n\n");
        }
  }   
        
    

    return 0;
}