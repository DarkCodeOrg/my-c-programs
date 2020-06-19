#include<stdio.h>
#include<string.h>

// use of some standard library string functions

int main()
{
    char a[10], b[10];
    printf("enter the first letter :");
    fgets(a, sizeof(a), stdin);            // the first argument in the fgets function is the char array where the string would be stored
                                           // the second argument is the maximum size of input that fgets function wll take
                                           //the third arg is from where fgets will take input here it is stdin that would take input from user during runtime
    printf("enter the second letter : ");
    fgets(b, sizeof(b), stdin);

    int i = strlen(a); int j = strlen(b);
    strcat(a,b);
    printf("the length of a is %d and as of b is %d and the final string is %s \n",i,j,a);

    return 0;
}