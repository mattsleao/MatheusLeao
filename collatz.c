#include<stdio.h>
int main(){
  int n = 124568651;
  while(n > 1){
    if(n % 2 == 0){ //for even numbers
      n = n / 2;
      printf("%d\n", n);
    }
    else{ //for odd numbers
      n = n * 3 + 1;
      printf("%d\n", n);
    }
  }
  return 0;
}
