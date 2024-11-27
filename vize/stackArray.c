#include<stdio.h>
#include<stdlib.h>
#define boyut 5
int dizi[boyut];
int top = -1;
int push(int data){
    if (top+1 == boyut)
    {
        printf("stack dolu");
    }else
    top = top +1;
    dizi[top] = data;
    
}

int pop(){
    if (top == -1)
    {
        printf("stack bos");
    }else
    top = top - 1;
    
}
int peek(){
    return printf("top veri -> %d",dizi[top]);
}
void yazdir(){
    if (top == -1)
    {
        printf("stack bos");
    } 
    for (int  i = 0; i < top+1; i++)
    {
        printf(" %d ",dizi[i]);
    }
    printf("<--TOP\n");
    printf("**********");
    
}

int main(){
    int secim;
    int data;
    while (1){
        printf("\n\n1->push\n2->pop\n3->peek\nsecim giriniz:");
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