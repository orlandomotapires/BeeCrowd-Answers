#include <stdio.h>

int main(){
  int n, totalCobaias=0, totalCoelhos=0, totalRatos=0, totalSapos=0;
  scanf("%d", &n);
  for(int i = 0;i<n;i++){
    int qnt;
    char letra;
    scanf("%d %c", &qnt, &letra);
    totalCobaias += qnt;
    if(letra == 'C'){
      totalCoelhos += qnt;
    }
    else if(letra == 'R'){
      totalRatos += qnt;
    }
    else if(letra == 'S'){
      totalSapos += qnt;
    }
  }
  printf("Total: %d cobaias\n", totalCobaias);
  printf("Total de coelhos: %d\n", totalCoelhos);
  printf("Total de ratos: %d\n", totalRatos);
  printf("Total de sapos: %d\n", totalSapos);
  printf("Percentual de coelhos: %.2f %%\n", (float)totalCoelhos/totalCobaias*100);
  printf("Percentual de ratos: %.2f %%\n", (float)totalRatos/totalCobaias*100);
  printf("Percentual de sapos: %.2f %%\n", (float)totalSapos/totalCobaias*100);
  return 0;
}