#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  
  int n, escolhaDoCarro, venceu=0;
  scanf(" %d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &escolhaDoCarro);
    if (escolhaDoCarro == 3 || escolhaDoCarro == 2) venceu++;   
  }

  printf("%d\n", venceu);
  return 0;
}