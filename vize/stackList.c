#include<stdio.h>
#include<stdlib.h>
#define stackSize 5
int sayac = 0;
struct stackList
{
    int data;
    struct stackList *next;
};
struct stackList* top = NULL;

int push(int data){
    if (stackSize == sayac)
    {
       printf("stack dolu..\n");
    }
    
    struct stackList* new = (struct stackList*)malloc(sizeof(struct stackList));
    new->data = data;
    new->next = NULL;
    if (top != NULL)
    {
        new->next = top;
    }
    top = new;
    sayac++;
}

int pop(){
    struct stackList* temp = top;
    if (top == NULL)
    {
        printf("stack bos");
    }else
    top = top->next;
    free(temp);
    sayac--;
    
}

int peek(){
    return printf("top eleman = %d\n",top->data);
}
void yazdir(){
    struct stackList* temp = top;
    printf("TOP-->");
    while (temp != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    
    printf("\n********\n");
    
}
int main(){
    int secim;
    int data;
    while (1){
        printf("\n1->push\n2->pop\n3->peek\nsecim giriniz:");
        scanf("%d",&secim);
        switch (secim)
        {
        case 1:
        printf("sayi giriniz:");
        scanf("%d",&data);
        push(data);
        yazdir();
        break;
        case 2:
        pop();
        yazdir();
        break;
        case 3:
        peek();
        break;
        }
    }
}

