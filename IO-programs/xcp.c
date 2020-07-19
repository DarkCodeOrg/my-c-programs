
                                 // this is a file copy program //  a copy of the cp bin in unix/linux

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        /* code */
    
    FILE *fs, *ft;  // src file and target file
    char ch;
    fs = fopen(argv[1], "r");
    ft = fopen(argv[2], "w");
    if (ft == NULL)
    {
        printf("the specified target file doesnt exist!!....creating a new one....");
        system("touch target");

    }
    
    while (1)
    {
        ch = fgetc(fs);
            if (ch == EOF)
                break;
            
        fputc(ch, ft);
            
    }
    fclose(fs);
    fclose(ft);

    }else{
        
        printf("usage <src file> <destn file>\n");

    }
    
    
    return 0;
}
