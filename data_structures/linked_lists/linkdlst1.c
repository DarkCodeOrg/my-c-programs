#include<stdio.h>
#include<stdlib.h>
#define _data_type_ int
struct node
{
    int data;
    struct node *nxt;
}*head ;

// linked list are created by a programmer by defining a struct that has a member which stores the data 
// and another member which is a pointer to a similar structure 

void createList(int n);
void displayList();
void insrtFront(_data_type_ data);
void insrtEnd(_data_type_ data);
void insrtNode(_data_type_ data, int position);
void delFront();
void delEnd();
void delNode(int position);

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
    displayList
();

    return 0;
}

void createList(int n){

    struct node *newNode , *temp;
    int data;
    head = (struct node *)malloc(sizeof(struct node));   // head had already been defined during struct definition 

    if (head == NULL)
    {
        /* if memory is not allocated */
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

void displayList(){
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

void insrtFront(_data_type_ data){
    struct node *newNode ;

    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Unable to allocate memory\n");
        exit(-1);
    }

    newNode->data = data;  // linking the data part 
    newNode->nxt = head;  // after this the newNode ppointer points to head
    
    head = newNode ;  // now the head pointer is replaced with the newNode pointer 
}

void insrtEnd(_data_type_ data){
    struct node *newNode, *temp ;
    if (newNode == NULL)
    {
        printf("cant allocate memory\n");
        exit(-1);
    }

    newNode->data = data;
    newNode->nxt = NULL;

    temp = head;
    while (temp != NULL)
    {
        temp = temp->nxt; 
    }
    temp->nxt = newNode;

    
}

void insrtNode(_data_type_ data, int position){
    struct node *newNode , *temp;
    newNode->data = data;
    newNode->nxt = NULL;

    temp = head;
    
    for (int i = 1; i < position-1; i++)
    {
        temp = temp->nxt;
        if (temp == NULL)
        break;    
    }

    newNode->nxt = temp->nxt;
    temp->nxt = newNode;
    
}

// similarly to delete items use free()

