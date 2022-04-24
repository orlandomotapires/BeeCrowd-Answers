#include <stdio.h>

int main(){
  int n1, n2, numPedrasMovidas, pedras[50], numTotalPedras=0, possivel, a1an;
  scanf("%d",&n1);
  for(int i=0; i<n1; i++){
    scanf("%d",&pedras[i]);
    numTotalPedras+=pedras[i];
  }
  
  a1an = numTotalPedras * 2 / n1;
  primeiro /= n1-1;
  ultimo = a1an - primeiro;

  while(pedras[n1-1] < ultimo){  
    if(pedras[i] > pedras[i+1]) possivel = 0;
  }

  if(!possivel) printf("%d", -1);
  else printf("%d", numPedrasMovidas);
  




  return 0;
}