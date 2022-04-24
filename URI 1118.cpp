#include <stdio.h>

int main(){
  double x1, x2;
  int op=1;
  while(op == 1){
    scanf("%lf", &x1);
    while((0.0 > x1 || x1 > 10.0)){
      printf("nota invalida\n");
      scanf("%lf", &x1);
    }

    scanf("%lf", &x2);
    while((0.0 > x2 || x2 > 10.0)){
      printf("nota invalida\n");
      scanf("%lf", &x2);
    }

    printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n", (x1+x2)/2.0);
  
    scanf("%d", &op);
    while((1 > op || op > 2)){
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &op);
    }
  }
    
  
  return 0;
}