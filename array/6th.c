//program to show the use of pointer to an array


#include<stdio.h>


int main()
{
    int s[4][2]={

                        {1234,10},
                        {5678,20},
                        {2345,30},
                        {2132,40},

                    };

        int (*p)[2];                                  //here p is the ponter to an array of two integers NOTE : the () is necessary here
                                                      // the absence of () woud make p a array of two int pointers 
        
        int *pint ;                                   //pint is an integer pointer

        for (int i = 0; i < 4; i++)                   // in this outer loop each time we store the address of a new array 
        {       // ^for row
         
            
            p = &s[i];                                //p would contain the adress of the zeroth element of the array                 

                                                      //ACTUALLY P IS CONTAINING THE ROW NUMBER 

            pint = (int *)p;                          //the address is then assigned to pint (an int pointer)
            printf("\n");
            for (int x = 0; x < 2; x++){
                  // ^for coloumn                     //AND X HERE IS CONTAINING THE COLOUMN NUMBER 
                                                      // THE FOR LOOP IS PRINTING THE VALUES IN FIRST ROW THEN SECOND THEN THIRD ......
                  printf("%d",*(pint + x));
                
            }
            

        }

        

    return 0;
}