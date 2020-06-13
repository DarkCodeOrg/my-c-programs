#include <stdio.h>



int main()
{
    char another;
    int i;
do
{
    /* code */
    printf("enter a number :");
    scanf("%i",&i);
    printf("the square of %d is %d\n",i,i*i);
    printf("want to enter another number y/n ");
    
    another = getchar();
    
}
while (getchar() == 'y');


  return 0;

}
