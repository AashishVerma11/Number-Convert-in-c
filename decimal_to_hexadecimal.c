#include<stdio.h>

int main(){
    int n, a[16]={0};

    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; n!=0; i++, n/=16){
        a[i] = n%16;
    }

    printf("HexaDecimal Number: ");

    for(int i=15; i>=0; i--){
        printf("%2d",a[i]);
    }

}