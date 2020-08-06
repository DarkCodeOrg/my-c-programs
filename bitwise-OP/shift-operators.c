#include<stdio.h>

int main()
{   
    // this program is for showing the use of left and right shift operators

    // LEFT shift operator << 
    int x = 1 << 2 ; // this means that the bits of 1 (0000 0001) are shifted towards left by 2 places and becomes : 0000 0100 (4) and is stored in x

    printf("the result is : %d\n",x);

    return 0;
}