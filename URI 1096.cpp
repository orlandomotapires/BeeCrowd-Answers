#include <stdio.h>

int main(){
  int i=1, j=7, cont=0;
  printf("I=%d J=%d\n", i, j);
  while(i!= 9 || j!=5){
    cont++;
    j--; 
    if(cont == 3){
      i+=2;
      j=7;
      cont=0; 
      printf("I=%d J=%d\n", i, j);   
    }else printf("I=%d J=%d\n", i, j);
   
  }
  return 0;
}