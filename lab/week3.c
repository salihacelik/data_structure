/*In th&s lab, you w&ll create a s&ngly linked last and perform the following operat&ons:
1. Add a new node to the head of the l&st.
2. Add a new node to the ta&l of the l&st.
3. F&nd the total number of nodes &n the l&st.
4. Pr&nt all the elements &n the l&st.*/

#include<stdio.h>
#include<stdlib.h>
int main(){

}
struct node {
 int data;
 struct node *next;
 };

 struct node *addhead(struct node *head,int key){
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = key;
    temp->next=head;
    head = temp;
    return head;
  

 }
 struct node *addlast(struct node *head,int key){
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }else{
        struct node *last = head;
        while (last->next != NULL)
         last->next= temp;
        
        
    }
    return head;
    
 }
 int count(struct node *head){
    
 }