#include<stdio.h>

int main(){
    int n, a[16]={0};

    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; n!=0; i++, n/=8){
        a[i]=n%8;
    }

    printf("Octal Number: ");
    for(int i=15; i>=0; i--){
        printf("%3d",a[i]);
    }

    return 0;
}