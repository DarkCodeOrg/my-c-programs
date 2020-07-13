                    // this program counts the number of lines , spaces , tabs , and chars
#include<stdio.h>
#include<stdlib.h>

int main (int argc,char *argv[])
{
    FILE *fp;           // fp pointer whose value at adress is a FILE structure type
    char ch;
    int NOL=0, NOC=0, NOT=0, NOS=0; // NO of lines, characters,tabs,spaces
    fp = fopen(argv[1],"r");
   
    if (argc == 2)
    {

    while (1)
      {
        ch = fgetc(fp);
        if (ch == EOF)
            break;

            NOC++;   // increment the number of chars after reading each character
        if(ch == ' ') 
            NOS++;   

        if(ch == '\t')
            NOT++;

        if(ch == '\n')         
            NOL++;

      }

      printf("the number of lines is : %d\n",NOL);
      printf("the number of spaces is : %d\n",NOS);
      printf("the number of characters is : %d\n",NOC);
      printf("the number of tabs is : %d\n",NOT);
         
    }else{
        printf("Usage <filename>\n");
    }
     
          return 0;
}
