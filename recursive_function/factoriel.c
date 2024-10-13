// faktöriyel hesaplama
#include<stdio.h>
#include<stdlib.h>
int factoriel(int n){
    if (n == 1)
    {
        return n;
    }else
    return n * factoriel(n-1);
    

}
int main(){
    int sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    printf("%d",factoriel(sayi));
    return 0;
}
