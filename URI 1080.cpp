#include <stdio.h>

int main(){
  int maior=0, maiorPos;
  for(int i = 0; i<100; i++){
    int n;
    scanf("%d", &n);
    if(n > maior){
      maior = n;
      maiorPos = i+1; 
    } 
  }
  printf("%d\n%d\n", maior, maiorPos);
  return 0;
}