#include<stdio.h>

void func(int *p, int *q){  // the func accepts two integer variables adresses
    // initially p stores the add of i and q stores the add of j

    p = q; // now p also stores the address of j i.e p is also pointing to j 
    *p = 2; // so here "j" is set to 0
}

int main(){
    int i=0,j=1;
    func(&i,&j);  // the func function accepts the adress of two integer variables and stores them in i and j 
    printf("%d %d\n",i,j);

    return 0;
}