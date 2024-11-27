#include<stdio.h>
#include<stdlib.h>
#define arraySize  5
int dizi[arraySize];
int top= -1;

int push(int data){
    if(top + 1 == arraySize){
        printf("stack is full\n");
    }else{
        top =  top + 1;
        dizi[top] = data;
        
    }
}

int pop(){
    if (top == -1 )
    {
        printf("stack is empty!\n");
    }else{
        top= top -1;
    }
    
}

void yazdir(){
    for (int i = 0; i < top +1; i++)
    {
        printf(" %d ",dizi[i]);
    }
    printf("<== TOP\n");

    
}

int main(){
    push(0);
    push(1);
    yazdir();
    pop();
    yazdir();
    push(2);
    push(3);
    yazdir();
    push(4);
    push(5);
    yazdir();
    push(6);
    push(7);
    yazdir();

}