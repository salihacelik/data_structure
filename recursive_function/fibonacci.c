
#include<stdio.h>
#include<stdlib.h>
// eleman sayisi verilen fibonacci dizisini yazzdırma 
/*
int fibonacci(n){
    if (n == 0)
    {
        return 0;
    }else if (n == 1)
    {
        return 1;
    }else
    return fibonacci(n-1) + fibonacci(n-2);

}
int main(){
    int sayi;
    printf("kaç tane sayi hesaplanacak giriniz:");
    scanf("%d",&sayi);
    for (int i = 0; i < sayi; i++)
    {
       printf(" %d ",fibonacci(i));
    }
    

}*/

// fibonacci dizisi bulma
/*int main(){
    int sayac,sayi1 = 0,sayi2 = 1,nextTerm;
    printf("terim sayisi girniz:");
    scanf("%d",&sayac);
    for (int i = 0; i < sayac; i++)
    {
        printf("%d ",sayi1);
        nextTerm = sayi1 +sayi2;
        sayi1 = sayi2;
        sayi2 = nextTerm;
    }
    
}
*/


int main(){
    int eleman;
    int sayi1 = 0,sayi2 = 1;
    int nextTerm;
    printf("hangi eleman olacagini giriniz");
    scanf("%d",&eleman);
    for (int i = 1; i < eleman; i++)
    {
        nextTerm = sayi1 +sayi2;
        sayi1 = sayi2;
        sayi2 = nextTerm;
    }
    printf("%d. eleman = %d",eleman,sayi1);
    
}






