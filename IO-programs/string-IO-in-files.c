#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
    
    FILE *fp;
    char s[150];
    fp = fopen(argv[1],"r+");
    if(fp == NULL)
    {
        puts("cannot open file !!");
        exit(1);
    }

    printf("enter your text:\n");   
    while(strlen(gets(s)) > 0){    // take input text until the user presses enter at the beginning of a new line
                                    
        fputs(s,fp);                 // print the input buffer to the file after the user presses enter at the end of a line
        fputs("\n",fp);             

    }
    fclose(fp);
    
    // reading back from the file
    printf("\nreading the contents\n");

    if(fp == NULL){
        puts("cannot open file !!");
        exit(2);
    }

    while(fgets(s,149,fp)!= NULL){

            printf("%s",s);
    }
    
    fclose(fp);

    }else{
        printf("usage <filename>\n");
        exit(3);
    }

    return 0;
}