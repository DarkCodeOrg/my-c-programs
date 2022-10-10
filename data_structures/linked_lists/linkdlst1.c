#include<stdio.h>
#include<stdlib.h>

// linked list are created by a programmer by defining a struct that has a member which stores the data 
// and another member which is a pointer to a similar structure 
void createList(int n);
void traverseList();

struct node
{
    int data;
    struct node *nxt;

}*head ;

int main(){
    /*struct node *base;   // base is a pointer to a structure (struct node)
                         // when we declare this new pointer to a structure it allocates a garbage address for the pointer 
                         // thats why we need to manually allocate memory for the pointer to our structure using malloc 
    base = (struct node *) malloc(sizeof(struct node)); 
    base->nxt = 0;      // base is now pontitng to  NULL 
    base->data = 1;   // -> using this we can change what the pointer to its left points to

    // printf("%d\n",base->data); // debug
    */
    int n;
    printf("enter the total no of nodes: ");
    scanf("%d",&n);

    createList(n);

    printf("data in the list:\n");
    traverseList();

    return 0;
}

void createList(int n){

    struct node *newNode , *temp;
    int data;
    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        /* if memeoryu is not allocated */
        printf("memory not allocated\n");
        exit(1);
    }

    printf("enter the data of node 1:");
    scanf("%d",&data);
    head->data = data;
    head->nxt = NULL; // pointing head to null 

    temp = head; // temp points to the same structure as head 

    for (int i = 1; i < n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node)); // allocating memory for newnode
        printf("enter data for %dth node:",i+1);
        scanf("%d",&data);
        newNode->data = data;
        newNode->nxt = NULL; // pointing newNode to null 

        temp->nxt = newNode; // previous node is now pointing to newNode
        temp = temp->nxt; // setting the current node as previous node

    }
}

void traverseList(){
    struct node *temp;
    if (head == NULL)
    {
        printf("List does not exist\n");
        exit(-1);
    }

    temp = head;
    while (temp !=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->nxt;
    }
}