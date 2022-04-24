#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    float media = (x*2 + y*3 + z*5)/10;
    printf("%.1f\n", media);
  }
  return 0;
}