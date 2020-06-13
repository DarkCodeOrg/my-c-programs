#include<stdio.h>
//multi dimensional array 2-D in this case

int main()

{
    int stud[4][2];
    int j;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("enter roll no and marks : ");
        scanf("%d %d",&stud[i][0],&stud[i][1]);

    }

    for (int i = 0; i < 3 ; i++)
    {
        /* code */
        printf("the roll is : %d and marks is : %d \n",stud[i][0],stud[i][1]);

    }
    
    
    return 0;
}