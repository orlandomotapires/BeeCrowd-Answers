#include <stdio.h>
#include <stdlib.h>

int main(){
  int numCandidatos;
  scanf(" %d", &numCandidatos);
  int numVotosPorCandidato[numCandidatos], jovemCarlos, check=0;

  for(int i = 0; i < numCandidatos; i++){
    scanf(" %d", &numVotosPorCandidato[i]);
    jovemCarlos = numVotosPorCandidato[0];
    if(jovemCarlos < numVotosPorCandidato[i])  check = 1;
  }
  
  if(check == 1) printf("N\n");
  else printf("S\n");

  return 0;
}