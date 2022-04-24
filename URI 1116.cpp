#include <stdio.h>

int main(){
  float n, x, y;
  scanf("%f", &n);
  for(int i = 0; i<n; i++){
    scanf("%f %f", &x, &y);
    if(y == 0) printf("divisao impossivel\n");
    else printf("%.1lf\n", x/y);
  }
  return 0;
}