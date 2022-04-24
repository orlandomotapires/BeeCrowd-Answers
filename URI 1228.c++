#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
  int n, ultrapassagem = 0;
  scanf(" %d", &n);
  int vectCompComecou[n], vectCompChegou[n], vectCompComecouAux[n];

  for(int i=0; i< n; i++){
    scanf(" %d", &vectCompComecou[i]);
  }

  for(int i=0; i< n; i++){
    scanf(" %d", &vectCompChegou[i]);
    for(int j=0; j< n; j++){
      if(vectCompComecou[j] == vectCompChegou[i]){
        if(i < j){
          ultrapassagem += j-i;
        }

        if(j==i && j < n-1){
          ultrapassagem ++;
        }
      }
    }
  }
  printf("%d\n", ultrapassagem);

  return 0;
}