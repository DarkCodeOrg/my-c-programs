#include<stdio.h>

int main()
{
    // this program depicts the usage of & operator to check whether a particular bit in a character or int is set to 1 or 0
    // also the | (OR) operator would be used to show how to turn ON a particular bit
    // and also turn the bit OFF if it is ON using the AND operator only

    
    int a = 73; // 73 = 01001001 i.e "the Fifth  bit is set to 0"
    printf("the initial value of 'a' is : %d\n",a);
    // now lets check this with &(and ) operator

    int ANDmask = 32; // 32 = 00100000  hence only the fifth bit is set to 1 
                        // and we know that and returns a high output only if both the inputs are high 
                        // hence if the fifth bit in original number is 1 then we would get a high (1) output or else 0

    int resultAND = (a & ANDmask);

    printf("the result of AND is : %d\n",resultAND); // printf would give 32 as output if the 5th bit in the original number is set to ON
                                    // else it would give 0 as ouput


    // now we would turn the 5th bit in a to ON state using OR

    int ORmask = 32; // 32 = 00100000  i.e the fifth bit is intentionally set to 1 coz we know OR would return a HIGH output if any one of the inputs is HIGH

     a |= ORmask ; 

    printf("the result of OR is i.e the present value of 'a' is : %d\n",a);
    // this would print 105 (73 + 32) hence the fifth bit has been set to 1

// now we would again set the Fifth bit to Zero using AND

    int newANDmask = 223; // 255-32 = 223 which is  = 11011111

    a &= newANDmask;

    printf("the present value of a is : %d\n",a);

    return 0;
}
