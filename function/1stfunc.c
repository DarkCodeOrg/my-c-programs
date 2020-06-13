#include<stdio.h>

void message1();  //function declaration
void message2();  //function declaration
int main()

{
   message1();//function call (calling the function)
   message2();//function call
  
   return 0;

}












/*
 *the functions whose prototype were declared above 
 *and called 
 *are defined below
 */





void message1()    /*defining function which were declared and called */
{
   printf("this is 1st message\n"); 
}
void message2()   /*defining function*/
{
   printf("this is 2nd message\n");
}
