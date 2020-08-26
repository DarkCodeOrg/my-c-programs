#include<stdio.h>
int main()
{
    int a = 12;
    void *ptr = (int *)&a;
    printf("%d", *ptr);  // here is the error READ BELOW
    getchar();
    return 0;
}


// this code would give compiler error bcoz void pointers cannot be dereferenced without typecasting

// the correct code would be

/*
int main()
{   
    int a = 12;
    void *ptr = (int *)&a;
    printf("%d\n",*(int *)ptr);

    retun 0;
}

*/
