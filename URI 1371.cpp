#include <stdio.h>
#include <stdlib.h>

int main(){
  int n=1, cont;
  
  while(n>0){
    cont=0;
    scanf(" %d", &n);
    
    for(int i = 1; i*i <= n; i++){
      if(cont != 1) {
        printf("%d", i*i);
        cont = 1;
      }
      else printf(" %d", i*i);      
    }
    
    if(n!=0)printf("\n");
  }
  return 0;
}
