#include <stdio.h>

int main(){
  int x;
  scanf("%d", &x);
  for(int i = x; i<(x + 6*2); i++){
    if(i%2!=0){
      printf("%d\n", i);
    }
  }

  return 0;
}