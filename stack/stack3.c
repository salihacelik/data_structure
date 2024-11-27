#include<stdio.h>
#include<stdlib.h>
#define stackSize 5
int counter = -1;
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;

int push(int data){
    if (counter == stackSize)
    {
        printf("stack is full\n");
    }else{
        struct stack *new = (struct stack*)malloc(sizeof(struct stack*));
        new->data = data;
        new->next = NULL;
        if (top != NULL)
        {
            new->next = top;
        }
        top = new;
        counter++;
    }
    
}
int pop(){
    if (top == NULL)
    {
        printf("stack is empty");
    }else{
        struct stack *temp = top;
        top = top->next;
        free(temp);
    }
    
}
int peek(){
    return top->data;
}