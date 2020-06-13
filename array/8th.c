            //program for interchanging the odd and even elements of an array 

#include<stdio.h>

void ichange(int p[],int );     //this function would shift all the elemnts of an array by one place
int main()
{

    int arr[5]={1,2,3,4,5};
    
    ichange(arr,4);
for (int i = 0; i < 5; i++)
{
    /* code */
        printf ("%d\n", arr[i]);
}

    return 0;
}

void ichange(int a[],int b)
{
    for (int i = 0; i <= b; i++)
    {
        /* code */
        if (i == b)
           a[b] =  a[0]; 
        
        else
          a[i] =  a[i+1];
    }
    
}