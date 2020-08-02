#include<stdio.h>

int main (int argc, unsigned char argv[])
{
    unsigned char compliment;
    compliment = ~argv[1];
    printf("the one's compliment  is : %d or %x or %X or %#X\n",compliment,compliment,compliment,compliment);

    return 0;
}