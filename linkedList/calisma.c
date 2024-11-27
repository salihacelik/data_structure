#include<stdio.h>
#include<stdlib.h>
struct calisma
{
    int data;
    struct calisma *next;
};
struct calisma* head = NULL;
struct calisma* tail = NULL;

int addData(int data){
    if (head == NULL)
    {
        struct calisma *new=(struct calisma*)malloc(sizeof(struct calisma*));
        new->data = data;
        new->next= NULL;
        head = tail = new;
    }else{
    struct calisma *new=(struct calisma*)malloc(sizeof(struct calisma*));
    new->data = data;
    new->next = NULL;
    tail->next = new;
    tail = new;
    }
}

int addDataHead(int data){
    if (head == NULL)
    {
        struct calisma *new=(struct calisma*)malloc(sizeof(struct calisma*));
        new->data = data;
        new->next= NULL;
        head = tail = new;
    }else{
        struct calisma *new=(struct calisma*)malloc(sizeof(struct calisma*));
        new->data = data;
        new->next = head;
        head = new;
    }
    
}
void print(){
    struct calisma *new = head;
    printf("liste yaziliyorr...\n");
    while (new != NULL)
    {
        printf(" - %d",new->data);
        new = new->next;
    }
    printf("\n");
}
 
void count(){
     struct calisma *new = head;
     int counter=0;
     while (new !=NULL)
     {
        counter++;
        new = new->next;
     }
     printf("eleman sayisi = %d\n",counter);
     
}

int delete(int data){
    struct calisma *new = head;
    if (new->data != data)
    {
        new = new->next;
    }
    free(new);

    
}
int main(){
    addData(5);
    addData(6);
    addDataHead(1);
    addDataHead(2);
    addData(7);
    addData(9);
    print();
    count();
    addData(7);
    addData(90);
    addDataHead(0);
    count();
    print();
    return 0;

}