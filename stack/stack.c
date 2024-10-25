#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack* top = NULL;

void push(int data){
    struct stack *new =(struct stack*)malloc(sizeof(struct stack));
    new->data = data;
    new->next = NULL;
    if (top != NULL)
    {
        new->next = top;
    }
     top = new;
    
}

void pop(){
    if (top == NULL)
    {
        printf("stack bos");
    }else{
        struct stack *temp = top;
        top = top->next; 
        free(temp);
    }
    
}
int peek(){
    return top->data;
}

void yazdir(){
    struct stack* q = top;
    while (q != NULL)
    {
        printf("%d<=",q->data);
        q = q->next;
    }
    
}

int main(){
    int secim;
    while (1)
    {
        printf("\n1-push");
        printf("\n2-pop");
        printf("\n3-peek");
        printf("\n yapmak istediğiniz islemi seciniz");
        scanf("%d",&secim);

        switch (secim)
        {
        case 1:
           printf("\ngirmek istediginiz sayi?");
           scanf("%d",&secim);
           push(secim);
           yazdir();
            break;
        case 2:
            pop();
            yazdir();
            break;
        case 3:
            printf("top elemani =>",peek());
            break;
        }

    }
    
     
}