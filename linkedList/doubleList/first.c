#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node* head = NULL;
struct node* tail = NULL;
int addNode(int data){  
    if (head == NULL)
    {
        struct node *new = (struct node*)malloc(sizeof(struct node*));
        new->data = data;
        new->prev = NULL;
        new->next = NULL;
        head = tail = new;
    }else{
         struct node *new = (struct node*)malloc(sizeof(struct node*));
         new->data = data;
         new->next = NULL;
         new->prev = head;
         tail->next = new;
         tail = new;

    }
    
}

int addToBeg(int data){
    struct node *new = (struct node*)malloc(sizeof(struct node*));
    new->data = data;
    new->prev = NULL;
    new->next = head;
    head->prev = new;
    head = new;
}
void print(){
    struct node *new = head;
    printf("yaziliyor...\n");
    while (new != NULL)
    {
        printf(" %d ",new->data);
        new = new->next;

    }
    printf("\n");
    
}

int main(){ 
    
    addNode(8);
    addNode(9);
    print();
    addToBeg(1);
    print();
    addNode(2);
    print();
    addNode(11);
    print();

}
