#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include<stdlib.h>

#define FLAG(n) (1 << n)

#define SET_FLAG(v, f)  ((v) |=  (f))   // v means variable and f refers to the flag 
#define CLR_FLAG(v, f)  ((v) &= ~(f))
#define TGL_FLAG(v, f)  ((v) ^=  (f))
#define CHK_FLAG(v, f)  ((v)  &  (f)) 


void menu()
{   
    printf("9) QUIT THE PROG\t\n");
    printf("1) CLEAR  FLAG\t\n");
    printf("2) SET    FLAG\t\n");
    printf("3) TOGGLE FLAG\t\n");
    printf("4) CHECK  FLAG\t\n");
}
int main(void)     
{    
        int num;
        int n;
        int choice;

        do
        {
            
        
        printf("Enter your number :");
        scanf("%d",&num);

        printf("what do you want to do ?\t\n");
                menu();
        printf("Your Selection:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 9:
            exit;

        case 1:

            printf("Enter the bitFlag number(0 to 7) which you want to clear: ");
            scanf("%d",&n); 
            CLR_FLAG(num, FLAG(n));
            
            printf("the result is : %d\t\n",num);
            
            break;

        case 2:
                    
                    
            printf("Enter the bitFlag number(0 to 7) which you want to set: ");
            scanf("%d",&n);
            SET_FLAG(num, FLAG(n));
            
            printf("the result is : %d\t\n",num);

            break;
        
        case 3:
                    
                        
            printf("Enter the bitFlag number(0 to 7) which you want to toggle: ");
            scanf("%d",&n);
            TGL_FLAG(num, FLAG(n));
            
            printf("the result is : %d\t\n",num);

            break;

        case 4:
            
            
            printf("Enter the bitFlag number(0 to 7) which you want to check: ");
            scanf("%d",&n);
            CHK_FLAG(num, FLAG(n));
            
            printf("the result is : %d\t\n",num);
            
            break;

        default:
            printf("please enter a valid choice\n");
            break;
        }

    
    } while (1);
    
    
    return 0;
}



