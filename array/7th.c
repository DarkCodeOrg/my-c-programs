#include<stdio.h>

void display (int q[ ][4],int,int);

int main()
{
                                                 // passing 2-d array to a function 

    int a[3][4] = {
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,0,1,2},
                  };

     display(a,3,4);                             //passing the array a and the row and colomn limit

    return 0;
}

void display(int q[ ][4],int row,int col)       //not mentioning the row since it would be changed every time in the loop 
                                                //but the colomn number is to be mentioned
{   
    for (int i = 0; i < row ; i++)
    {
                
        for (int j = 0; j < col ; j++)
        {
            printf("%d", q[i][j]);
            printf("\n");
        }
        
        printf("\n");

    }
    
}