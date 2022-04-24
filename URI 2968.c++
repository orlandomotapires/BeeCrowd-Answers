#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  
  int voltas, placas, num=0, i;
  double total;
  scanf("%d %d", &voltas, &placas);
  total = voltas * placas;
  for(i = 1; i < 9; i+=1){        
    printf("%d ", (int) ceil((total * i) / 10));   
  }
  printf("%d\n", (int) ceil(total * i / 10));
  return 0;
}
