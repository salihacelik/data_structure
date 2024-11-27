#include<stdio.h>
#include<stdlib.h>
struct circularList
{
    int data;
    struct circularList *next;
};
 struct circularList *tail = NULL;
 struct circularList *head = NULL;

int create(int data){
    struct circularList *new = (struct circularList*)malloc(sizeof(struct circularList*));
    if (head == NULL)
    {
        new->data = data;
        new->next = tail;
        head = tail = new;
    }else{ 
        new->data = data;
        new->next = head;
        tail = new;
    }
    

}
int main(){
    create(1);
}