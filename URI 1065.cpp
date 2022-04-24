#include <stdio.h>

int main(){
  int qnt=0;
  for(int i = 0; i < 5; i++){
    int valor;
    scanf("%d",&valor);
    if(valor%2==0) qnt ++;
  }
  printf("%d valores pares\n", qnt);
  return 0;
}