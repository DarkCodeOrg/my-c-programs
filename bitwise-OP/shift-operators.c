#include<stdint.h>
#include<stdio.h>
#include<assert.h>
#define FLAG(a) (1 << a)  // FLAG represents the bit flag which has to be set

 int main(void)
{   
    // this program is for showing the use of left and right shift operators and |= and &= and ~ operator

    // LEFT shift operator << 
    int x = 1 << 2 ; // this means that the bits of 1 (0000 0001) are shifted towards left by 2 places and becomes : 0000 0100 (4) and is stored in x
                     // the left shift operator can also be though of as multiplying by power of 2 i.e  a << b means multiplying a with 2^b 

    printf("the result of left shift is : %d\n",x);

    // RIGHT shift operator (>>)

    int y = 2 >> 24 ; // this means shifting  all the bits of 24 towards Right by 2 places 
                      // 24 = 0001 1000   which would become 0000 0110  ie 6
                        // this can also be thought of as integer devision by 2

    printf("the result of right shift is : %d\n",y);


    // SET flags

    printf("/////// /////////  Turning ON flags using |= operator  ///////////////////////// ///////////////////\n\n");
 
    uint8_t variable = 0b00000000; // initial value of the variable is 0 i.e all the flags are OFF,  Note : each bit in the variable is considered as a flag 

    // setting the first bit on 

    variable |= FLAG(0);  // this would set the first flag of variable to ON state
    assert(variable == 0b00000001);  // ==1   // NOTE : the assert is a macro that is used to check the validity of the given input , if the given condition is true then program execution continues and if the condition is false then the program execution is stopped there only  
    printf("after setting 1st flag ON, value of variable is = %hhu\n",variable);

    // setting the second bit on 

    variable |= FLAG(1);  // this would set the second flag of variable to ON state
    assert(variable == 0b00000011);  // ==3
    printf("after setting 2nd flag ON, value of variable is = %hhu\n",variable); 

    // setting the next two bits on 

    variable |= (FLAG(2)| FLAG(3));  // this would set the next two flags of variable to ON state
    assert(variable == 0b00001111); // == 15
    printf("after setting the next two (3rd and 4th) flag ON, value of variable is = %hhu\n",variable);

    printf("/////////////////// Turning off flags using &= and ~ operators together ////////////////////// ////////////////\n\n");

    // value of the variable after all the above operations are executed is = 0b00001111 = 15
    // now we would set all the flags, that we turned on, to OFF state

    variable &= ~(FLAG(0));  // this turn the first flag off
    assert(variable == 0b00001110); // == 14
    printf("after turning the first flag off the value of the variable is : %hhu\n",variable);

    variable &= ~(FLAG(1));  // this turn the second flag off
    assert(variable == 0b00001100); // == 12
    printf("after turning the second flag off the value of the variable is : %hhu\n",variable);

    variable &= ~(FLAG(2) | FLAG(3));  // this turn the next two flag off
    assert(variable == 0b00000000); // == 0
    printf("after turning the next two (3rd and 4th) flag off the value of the variable is : %hhu\n",variable);




    return 0;
}