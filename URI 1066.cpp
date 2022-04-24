#include <stdio.h>

int main(){
  int qntPar=0, qntImpar=0, qntPos=0, qntNeg=0;
  for(int i = 0; i< 5; i++){
    int valor;
    scanf("%d", &valor);
    if(valor%2==0) qntPar++;
    else qntImpar++;
    if(valor>0) qntPos++;
    else if(valor<0) qntNeg++;
  }
  printf("%d valor(es) par(es)\n", qntPar);
  printf("%d valor(es) impar(es)\n", qntImpar);
  printf("%d valor(es) positivo(s)\n", qntPos);
  printf("%d valor(es) negativo(s)\n", qntNeg);
  return 0;
}