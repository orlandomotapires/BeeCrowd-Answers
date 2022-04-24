#include <stdio.h>
#define impar(x) (x%2 != 0)

int main(){
  int n, x, y, totalImpar=0;
  scanf("%d", &n);
  
  for(int i = 0; i<n; i++){
    scanf("%d %d", &x, &y);
    totalImpar=0;
    if(x > y) {
      int aux = y;
      y = x;
      x = aux;
    }
    for(int j = x+1; j<y; j++){
      if(impar(j)){
        totalImpar += j;
      }
    }
    printf("%d\n", totalImpar);
  }
  
  return 0;
}