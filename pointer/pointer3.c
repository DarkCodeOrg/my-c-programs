#include<stdio.h>

int f(int x, int *py, int **ppz) 
{   // initially it would seem that the programwould print out 18 but actually the answer is 19 
  int y, z; 
  **ppz += 1; // this changes "C" to 5  ****** remember X is not changed here bcoz it was storing the value of C which is 4
   z  = **ppz; // and Z is 5 now
  *py += 2;  // now this is operating on the new "C" i.e whose val is 5
   y = *py;  // so y becomes 7
   x += 3;  // and X stored the val of C directly so it is still 4 and is incremented to 7 here
   return x + y + z; // 7 + 7 + 5
} 
   
void main() 
{ 
   int c, *b, **a; 
   c = 4; 
   b = &c; 
   a = &b; 
   printf("%d \n", f(c, b, a)); 
}