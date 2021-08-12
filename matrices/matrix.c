// matrix multiplication of squae matrix
#include<stdio.h>
# define N 4
///// N is the dimension of N*N matrix 

void multiply(int mat1[][N],int mat2[][N], int res[][N]){     
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
