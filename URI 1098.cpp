#include <stdio.h>

int main(){
  float i=0, j=1; 
  int cont=0, aux=0, contGeral=12;
  while(i<2.2){
    if(contGeral == 12){
      aux++;
      if(aux == 3) contGeral = 0;
      printf("I=%0.0f J=%0.0f\n", i, j);
    }else if(aux >= 3){
      contGeral++;
      if(contGeral == 12) aux = 0;
      printf("I=%.1f J=%.1f\n", i, j);
    }
    cont++;
    if(cont == 3){
      i+=0.2;
      j-=1.8;
      cont=0; 
    }else j++;
  } 
  return 0;
}