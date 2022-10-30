#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create a node
   struct Node{
    int data;
    struct Node* next ;
   };

    //Defining various nodes pointers
    struct Node* first=NULL;
    struct Node* second =NULL;
    struct Node* third=NULL;

    // allocation of memory
    first= malloc(sizeof(struct Node));
    second= malloc(sizeof(struct Node));
    third= malloc(sizeof(struct Node));

    // Assigning values to nodes
    // data values
    first->data = 1;
    second->data = 2;
    third->data = 3;

    //pointer values
    first->next=second;
    second->next=third;
    third->next = NULL;

    //get values from the list
    printf("the originally formed list\n");
    printf("%i\n",first->data);
    printf("%i\n",first->next->data);
    printf("%i\n",first->next->next->data);


    //insert values in to the linked list
    struct Node* middle=NULL;

    middle = malloc(sizeof(struct Node));
    middle->next=second;
    first->next=middle;
    middle->data=5;
    
    printf("the list after inserting\n");
    printf("%i\n",first->data);
    printf("%i\n",first->next->data);
    printf("%i\n",first->next->next->data);
    printf("%i\n",first->next->next->next->data);

    //deletion of a node

    first->next=second;
    second->next= third;
    printf("The list after deleting\n");
    printf("%i\n",first->data);
    printf("%i\n",first->next->data);
    printf("%i\n",first->next->next->data);


    return 0;
}