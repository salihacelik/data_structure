#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
// Add node
int addNode(int data){
    if (head == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        head = tail = new;
    }else{
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        
        tail->next = new;
        tail =  new;
    }    
    
}
// Add node to head 
int addNodeHead(int data){
    if (head == 0)
    {
        struct node* new = (struct node*)malloc(sizeof(struct node*));
        new->data = data;
        new->next = NULL;
        head = tail = new;
    }else{
    struct node* new = (struct node*)malloc(sizeof(struct node*));
    new->data = data;
    new->next = head;
    head = new;
    }
}
//Print 
int print(){
    printf("linked list:");
    struct node *index = head;
    while (index !=NULL)
    {
        printf("%d - ",index->data);
        index = index->next ;
    }
    printf("\n");
}
// delete
int delete(int data){
    struct node *prev = NULL;
    struct node *index = head;
    //linked list is empty
    if (head == NULL)
    {
        printf("liste bos");
    }
    if (head->data == data)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }while (index != NULL && index->data != data)
    {
        prev = index;
        index = index->next;
    }
    if (index == NULL)
    {
        printf("data not found");
        return 1;
    }
    
    prev->next = index->next;
    if (tail->data == data)
    {
        tail = prev;
    }
    
    free(index);

}


int main(){

    addNode(8);
    addNodeHead(15);
    addNode(5);
    addNodeHead(1);
    addNode(5);
    addNode(10);
    addNode(17);
    print();
    delete(15);
    print();

}