#include<stdio.h>

//how to initiate a 2-D  array

int main()
{
    int stud[4][2]={

                        {1234,10},
                        {5678,20},
                        {2345,30},
                        {2132,40},

                    };
        
        for (int i = 0; i < 3; i++)
        {
            /* code */
            printf("the results are %d %d \n",stud[i][0],stud[i][1]);

        }
        
        


    return 0;

}