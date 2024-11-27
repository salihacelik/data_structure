#include<stdlib.h>
#include<stdio.h>
#define boyut 5
int kuyruk[boyut],front = -1,rear = -1;


int enQueue(int data){
    if(rear == boyut){
        printf("\nkuyruk dolu");
    }else{
        if (front == 1)
            front = 0;
        rear = rear+1;
        kuyruk[rear] = data;
    }
}

int deQueue(){
    if (front == 1 || front > rear)
    {
        printf("\nkuyruk bos");
        front = -1;
        rear = -1;
    }else
    front = front + 1;
    
}
int peek(){
    return printf("%d",&kuyruk[rear]);
 }

void yazdir(){
    
}

int main(){
    peek();
}