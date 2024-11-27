#include<stdio.h>
#include<stdlib.h>
#define stackSize 4
int sayac = -1;

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;


int push(int data){
    if (sayac == stackSize)
    {
        printf("stack is full\n");
    }else{
        struct stack *new = (struct stack *)malloc(sizeof(struct stack *));
        new->data = data;
        new->next = NULL;
        if (top != NULL){
        new->next = top;
        }
         top = new;
        sayac++;
    }
    
}
int pop(){
    if (top == NULL)
    {
        printf("stack bos");
    }else{
        struct stack *temp = top;
        top = top->next;
        free(temp);
        sayac--;
       
    }
    
}
int peek(){
    return top->data;
}

void print(){
     struct stack *new= top;
     while (new != NULL)
     {
        printf("%d ",new->data);
        new = new->next;
        
     }
     printf("\n");
}
int main(){
    push(0);
    push(1);
    printf(" %d \n",peek());
    push(2);
    push(3);
    print();
    pop();
    print();
    push(3);
    print();
    push(4);
    print();
    push(5);

}