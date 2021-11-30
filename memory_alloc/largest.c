#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i, *ptr;

    printf("enter the no of elements : ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    /* if memory cannot be allocated */
    if (ptr == NULL){
        printf("Error! Memory cannot be allocated\n");
        exit(0);
    }

    printf("Enter the elements : ");
    for (i = 0; i < n; i++){
        scanf("%d", ptr + i);
    
    }

    for (i = 0; i < n; i++){
        if(*ptr < *(ptr+i)){
            *ptr = *(ptr+i);
        }
    }
    
    printf("the largest number is : %d \n",*ptr);

    /*  deallocating the memory */ 
    free(ptr);

    return 0;
}

