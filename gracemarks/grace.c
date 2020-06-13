#include<stdio.h>

int main()

{   
    int c,f;
   do
   {
       
       printf("\nEnter the class you got 1/2/3 :");
       scanf("%d",&c);
       printf("\nEnter the number of subjects you failed in (0-7) :");
       scanf("%d",&f);
   } while (c>3 || c<1 || f<0 || f>7);
   
   switch (c)
   {
   case 1:
            if (f>3)
       {
           printf("\n no grace marks\n");
       }
       else
       {
           printf("\n grace is 5 marks per subject\n");
       }
    break;
    case 2:
            if (f>2)
       {
           printf("\n no grace marks\n");
       }
       else
       {
           printf("\n grace is 4 marks per subject\n");
       }
    break;
    case 3:
            if (f>1)
       {
           printf("\n no grace marks\n");
       }
       else
       {
           printf("\n grace is 5 marks\n");
       }
       break;
   
   default:
       break;
   }         
   return 0;

}
