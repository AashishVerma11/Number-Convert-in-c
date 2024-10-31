#include <stdio.h>

int main() {
  int n, a[16]={0};
  
  printf("Enter a number to convert decimal into binary: ");
  scanf("%d",&n);
  
  for(int i=0; n!=0; i++,n/=2){
      a[i] = n%2; 
  }
  
  printf("Binary numbar: ");
  for(int i=15; i>=0; i--){
      printf("%3d",a[i]);
  }

    return 0;
}