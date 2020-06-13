#include<stdio.h>

int main ()
{
    // program with an array initialization

    int array[5] = {2,3,4,5,6};
    int average,sum = 0 ;

    for (int i = 0; i < 5; i++)
    { sum = sum + array[i];}

        average = sum/5 ;

        printf ("the avg is %d \n",average);
        
    return 0;
}
