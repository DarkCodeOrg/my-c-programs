// gahans program

//program to evaluate matrix multiplication product
#include<stdio.h>


int main()
{
    int a[10][10],b[10][10];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    printf("\n\tEnter the rows and columns of the matrix a: ");
    scanf("%d %d",&arows,&acolumns);

    //scanning matrix a
    printf("\n\tEnter the elements of matrix a:\n ");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }

    printf("\n\tEnter the rows and columns of the matrix b: ");
    scanf("%d %d",&brows,&bcolumns);

    //scanning matrix b
    printf("\n\tEnter the elements of matrix b:\n ");
    for(i=0;i<brows;i++)
    {
        for(j=0;j<bcolumns;j++)
            scanf("%d",&b[i][j]);
        printf("\n");
    }

    //checking for invalid matrix multiplier
    if(brows!=acolumns)
        printf("\n\tSorry,the product cannot be defined.");
    else
    {
    //evaluating the product
    int product[10][10] = {0};
    
    for(i=0;i<arows;i++){
        for(j=0;j<bcolumns;j++){
            for(k=0;k<brows;k++){
                product[i][j] += (a[i][k]*b[k][j]);
            }   
        }
    }

    //printing the product matrix
    printf("Resultant Matrix:\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            printf("%d", &product[i][j]);
        }printf("\n");
    }
    }
    return 0;
}