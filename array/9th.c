
                    // program which copies the contents of one array to another in reverse order

#include<stdio.h>
void rev(int [],int []);
int main()
{
    int a[5];
    int b[5];
    printf("enter 5 numbers : ");       //taking user input
    for (int i = 0; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("you entered this : ");      //showing the user their input in first array
    for (int  i = 0; i < 5; i++)
    {
        printf(" %d ",a[i]);
    }
    
    rev(a,b);       //the function is being called 
                    //it takes two arguments the array to be reversed and the array where it is to be stored
    
    printf("\nthis is the output : ");
    for (int  i = 0; i < 5; i++)
    {
        printf(" %d ",b[i]);

    }

    printf("\n");
    
    return 0;
}

void rev(int r[],int s[])       // function for transposing the arrays 
{
    int d = 0, c = 4;

    for ( d = 0; d < 5; d++)
    {
        for ( c = 4 ; c >= 0; c--)
        {
            s[c] = r[d];        
            d++;            //if we dont add d++ then every element of "s" would become the last element of "r"
        }
        

    }

}