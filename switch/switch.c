#include<stdio.h>

int main()
{
    int i=2;

    switch (i)
    {
    case /* constant-expression */1:
        /* code */printf("i am in case 1\n");
        break;
    case /* constant-expression */2:
        /* code */printf("i am in case 2\n");
        break;
    case /* constant-expression */3:
        /* code */printf("i am in case 3\n");
        break;
        case /* constant-expression */4:
        /* code */printf("i am in case 4\n");
        break;
    default:
        printf("i am in case default\n");
        break;
    }
    return 0;
    
}