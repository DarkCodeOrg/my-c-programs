#include<stdio.h>
#include<string.h>

// simple program with strings, using gets and puts

int main()
{
    char name[20];
    printf("whats your name bro : ");
    gets(name);    // CAUTION ::: gets functon is dangeous and should be avoided
                    // use fgets instead
    printf("length is %ld \n",strlen(name));
    //  scanf("%[^\n]s",name)    //scanf could also be used in this case
    puts("hello !");
    puts(name);
    return 0;
}

