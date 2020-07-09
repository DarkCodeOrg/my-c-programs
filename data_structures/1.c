#include<stdio.h>
struct passenger
    {
        char source_destn[30], target_destn[30], name[50], gender[1], address[50]; int age;
          
    }p[3];


void display1(struct passenger *A);
void display2(struct passenger *B);
void display3(struct passenger *C);
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
    
    display1(&p[0]);
    display2(&p[1]);
    display3(&p[2]);

    return 0;
}

void display1(struct passenger *A)
{
    printf("\n\n this is passenger 1\n");
    printf("name: %s address: %s gender:%s age: %d \nsrc_destn: %s target_destn: %s",A->name, A->address, A->gender, A->age, A->source_destn, A->target_destn);

}

void display2(struct passenger *B)
{
    printf("\n\n this is passenger 2\n");
    printf("name: %s address: %s gender:%s age: %d \nsrc_destn: %s target_destn: %s",B->name, B->address, B->gender, B->age, B->source_destn, B->target_destn);

}

void display3(struct passenger *C)
{
    printf("\n\n this is passenger 3\n");
    printf("name: %s address: %s gender:%s age: %d \nsrc_destn: %s target_destn: %s",C->name, C->address, C->gender, C->age, C->source_destn, C->target_destn);

}