#include<stdio.h>
#include<stdlib.h>
struct linkedList
{
    int data;
    struct linkedList *next;
};
struct linkedList* head = NULL;
struct linkedList* tail = NULL;

int addNode(int data){
    struct linkedList *new = (struct linkedList*)malloc(sizeof( struct linkedList));
    if (head == NULL)
    {
        new->data = data;
        new->next = NULL;
        head = tail = new;
    }else
    new->data = data;
    new->next = NULL;

    tail->next = new;
    tail = new;
    
}
int addHead(int data){
    struct linkedList *new = (struct linkedList*)malloc(sizeof( struct linkedList));
    if (head == NULL)
    {
        new->data = data;
        new->next = NULL;
        head = tail = new;
    }else
    new->data = data;
    new->next = head;
    head = new;

}
int delete(){
    struct linkedList *temp;
    if (head == NULL)
    {
        printf("liste boş\n");
    }
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    
}

int deleteRecursive(struct linkedList *head){
    if (head ==  NULL)
    {
        return 0;
    }else
    deleteRecursive(head->next);
    free(head);
    
}
void print(){
    struct linkedList *temp = head;
    while (temp != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}

int reverseprint(struct linkedList *head){
    if (head == NULL)
    {
        return 0    ;
    }else
    reverseprint(head->next);
    printf(" %d",head->data);
    
}

int countRecursive(struct linkedList *head){
    
    if (head == NULL)
    {
        printf("liste bos\n");
    }else
    return 1+countRecursive(head->next);

}
int main(){
    int secim;
    int data;
   while (1){
    printf("\n1-)ekle\n2-)yazdir\n3-)basa ekle\n4-)sil\n5-)ters yazdir\n6-)say\nseciminizi giriniz:");
    scanf("%d",&secim);
    switch (secim)
    {
    case 1:
        printf("eklenecek sayiyi giriniz:");
        scanf("%d",&data);
        addNode(data);
        break;
        case 2:
        printf("liste yaziliyor...");
        print();
        break;
        case 3:
        printf("eklenecek sayiyi giriniz:");
        scanf("%d",&data);
        addHead(data);
        break;
        case 4:
        deleteRecursive(head);
        break;
        case 5:
        reverseprint(head);
        break;
        case 6:
        printf("eleman sayisi = %d\n",countRecursive(head));
        break;
    
   
    }
  }

}