// this program is to show the function pointer

#include<stdio.h>

void func(int a){
    printf("%d\n",a);

}

int main (){
    void (*fun)(int) = &func;

    (*fun)(10);


    return 0;

}