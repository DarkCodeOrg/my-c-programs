#include<stdio.h>
#pragma pack(1)
struct passenger
    {
        char source_destn[30], target_destn[30], name[50], gender[1], address[50]; int age;
          
    }p[3];


void display1(struct passenger *A,int i);   // the structure elements would be passed to these functions

int main(void)
{

   
    int flush;
    
    for (int i = 0; i < 3; i++){
        printf("enter the name :");
        fgets(p[i].name, 51, stdin);    // +1 for accomodating "\n"
        printf("Enter the address :");
        fgets(p[i].address, 51, stdin);
        printf("Enter the gender[M/F/N] :");
        fgets(p[i].gender, 3, stdin);   // why do i have to use 3????
        
        printf("Enter the src_destn :");
        fgets(p[i].source_destn, 31, stdin);     
        printf("Enter the target_destn :");     
        fgets(p[i].target_destn, 31, stdin);
        
        printf("Enter the age :");
        scanf("%d",&p[i].age);
        
        while((flush = getchar()) != '\n')  // this is used to flush out the keyboard buffer since scanf is used at the end
            ;
            
    }

        printf("this is what you entered: \n");

        for (int i = 0; i < 3; i++){
            printf("\n ---------------- %d th  PASSENGER ---------------\n\n",i+1);
            printf("name: %s address: %s gender:%s age: %d \nsrc_destn: %s target_destn: %s",p[i].name, p[i].address, p[i].gender, p[i].age, p[i].source_destn, p[i].target_destn);
        }
    
    printf("\n\ndisplaying them by passing the structure elements to functions : \n");
    
    for (int i = 0; i < 3; i++)
    {
        display1(&p[i],i+1);
    }
    

    return 0;
}

void display1(struct passenger *A,int i)
{
    printf("\n\n this is passenger %d\n",i);
    printf("name: %s address: %s gender:%s age: %d \nsrc_destn: %s target_destn: %s",A->name, A->address, A->gender, A->age, A->source_destn, A->target_destn);

}

