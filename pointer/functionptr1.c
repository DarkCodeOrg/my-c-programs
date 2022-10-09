#include<stdio.h>

void func(int *a){
    printf("%d",*a);
}

int main(){
    int a = 5;
    int *p = &a;
    void (* foo)(int *);
    foo = &func;
    foo(p);
    
    return 0;
}