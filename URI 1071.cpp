#include<stdio.h>
int main(){
  long int x, y, valor=0;
  scanf("%d %d", &x, &y);
  if(x>y){
    for(int i = y+1; i<x;i++){
      if(i%2!=0){
        valor += i;
      }
    }
  }
  else{
    for(int i = x+1; i<y; i++){
      if(i%2!=0){
        valor += i;
      }
    }
  }
  printf("%d\n", valor);
  return 0;
}