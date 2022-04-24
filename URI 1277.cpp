#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>

int main(){
  int qntCasos;
  scanf("%d", &qntCasos);

  for(int i = 0; i<qntCasos; i++){
    int numEstudantes;
    char nomes[5000], passados[5000], frequencia[100];
    char *nomeUnico, frequenciaUnica[1000];
    float totalAulasSemContarM, qntP, qntA, suficienteAulasParaPassar;

    scanf("%d", &numEstudantes);
    scanf(" %[^\n]s", nomes);
    
    nomeUnico = strtok(nomes, " ");
    int umaVez = 0;     
    for(int j = 0; j<numEstudantes; j++){
      
      scanf(" %s", frequenciaUnica);

      totalAulasSemContarM = qntP = qntA = 0.0;

      int tamFreq = strlen(frequenciaUnica);
      
      for(int k = 0; k<tamFreq; k++){
        if(frequenciaUnica[k] != 'M' && frequenciaUnica[k] != 'm'){
          totalAulasSemContarM++;
          if(frequenciaUnica[k] == 'P' || frequenciaUnica[k] == 'p') qntP++;        
          else if(frequenciaUnica[k] == 'A' || frequenciaUnica[k] == 'a') qntA++;
        }
      }
     
      suficienteAulasParaPassar = (totalAulasSemContarM*3)/4;
      
      if(!umaVez) {
          if(qntP < suficienteAulasParaPassar) {
          printf("%s", nomeUnico);  
          umaVez = 1;
        }  
      }    
      else if(umaVez == 1){
        if(qntP < suficienteAulasParaPassar) printf(" %s", nomeUnico);
      }

      nomeUnico = strtok(NULL, " ");
      
    }

    if(i != qntCasos) printf("\n");

  }

  return 0;
}