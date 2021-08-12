// matrix multiplication of rectangular matrix
#include<stdio.h>

 

void multiply(int r1, int c1,int mat1[][c1],int r2,int c2,int mat2[][c2], int res[r1][c2]){     
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){
                res[i][j] += mat1[i][k]*mat2[k][j];
            }   
        }    
    }
}

int main(){
    int mat1[N][N], mat2[N][N];
    int res[N][N] = {0} ;
    printf("Enter the elements of first matrix: \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d",&mat1[i][j]);
        }  
    }
    printf("Enter the elements of second matrix: \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    multiply(mat1,mat2,res);
    printf("the resultant matrix is : \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}