#include<stdio.h>

int main()
{
    //a simple prgram using arrays 

    int avg,sum = 0;
    int marks[30]; // array declaration  //the array would take 30 elements of the form int 

    for (int i = 0; i < 29; i++)
    {
        printf("enter marks : ");
        scanf("%d",&marks[i]); //store data in array //store the given value 
                                //at the address of marks[i]
    }
    for (int i = 0; i < 29; i++)
        {
            sum = sum + marks[i]; // read data from an array 
        }  
    avg = sum/30;
    printf ("avg marks is %d \n",avg);
    return 1;
}
    