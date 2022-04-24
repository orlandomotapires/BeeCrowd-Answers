#include <stdio.h>

int main(){
  double x1, x2;
  
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

    printf("media = %.2lf\n", (x1+x2)/2.0);

    
  
  return 0;
}