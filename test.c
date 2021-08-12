#include<stdio.h>
#include<string.h>

int main(int argc, char argv[])
{
    if (argc == 2 ){
        FILE *fp;
        char ch;
        fp = fopen(argv[1],"r+");
        while(1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
            {
                break;
            }
            
            else
            {
                putchar(ch);
            }
            
        }

    }else{
        printf("usage <filename>\n");
        /* code */
    }

    return 0;
    
}