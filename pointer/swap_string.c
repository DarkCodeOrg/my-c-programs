#include<stdio.h>
// swapping strings(stored in character pointers) using pointers 

void swap_pointer(char **str1_ptr,char **str2_ptr) //  **str1_ptr is a pointer to str1 so *str1_ptr here means the address of str1 in main 
{
    char *temp;
    temp = *str1_ptr;
    *str1_ptr = *str2_ptr;
    *str2_ptr = temp;
}

int main(){

    char *str1 = "Hi its Me.";
    char *str2 = "I am learning C.";
    swap_pointer(&str1, &str2);
    printf("str1 is now : %s, str2 is now : %s\n", str1,str2);
    // the above method cannot be applied if strings are stored using character arrays 
    // at that time we need to swap data instead of pointers 
    getchar();

    return 0;
}