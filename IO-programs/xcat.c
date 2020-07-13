                   // this program is used for displaying the contents of a file
                   // this program also takes direct input from the command line
                   // this program is a clone of the cat binary as in unix/linux OS 

#include<stdio.h>
#include<stdlib.h>

int main(int argc ,char *argv[])
{
    if (argc == 2){

        FILE *fp;  // data type for files 
        char ch;    // this chararcter variable would store the first character of the file 
        fp = fopen(argv[1],"r");  // to read or write from or to a file we must at first open the file
                                  // fopen opens the file in read mode (thats why we specified 'r')
                                  // tasks that fopen perfrms are :: 1) it searches the file to be opened on the disk
                                  // 2) it loads the file from the disk into a buffer in the memory
                                  // 3) it sets up a character pointer which points to the first character of the file
                                  // 4) it sets up a FILE structure and returns its address (and we store this address in  a pointer called fp)
        while(1)    
        {    
            ch = fgetc(fp);
            if(ch == EOF)
                break;
            printf("%c",ch);

        }
        printf("\n");
        fclose(fp);
        
    }else{
        printf("Usage <filename>");
    }

return 0;

}

/* the basic idea of the program is :
 * 1 read a character from the file 
 * 2 display the character on the file
 * 3 repeat steps 1 and 2 for all the characters until it reaches the End Of file
 */
 
