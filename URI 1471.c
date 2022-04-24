#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int voluntariosMergulhou, voluntariosVoltaram, r, vectVoluntariosMergulhou[1000], vectVoluntariosVoltaram[1000];
  
  while(scanf("%d %d", &voluntariosMergulhou, &voluntariosVoltaram ) == 2){   
  
    for(int i =0; i<voluntariosVoltaram; i++){
      scanf(" %d", &r);        
      vectVoluntariosVoltaram[i] = r;
    }

    for(int i = 0; i<voluntariosMergulhou; i++){
     vectVoluntariosMergulhou[i] = i+1;           
    }
  
    for(int i = 0; i < voluntariosMergulhou; i++){
      for(int j = 0; j < voluntariosVoltaram; j++){
        if(vectVoluntariosMergulhou[i] == vectVoluntariosVoltaram[j]) vectVoluntariosMergulhou[i] = 0;                        
      }            
    }

    int count = 0;
    for(int i = 0; i<voluntariosMergulhou; i++){       
      if(vectVoluntariosMergulhou[i] != 0) count++;    
    }

    if(count != 0){
      for(int i = 0; i<voluntariosMergulhou; i++){       
        if(vectVoluntariosMergulhou[i] != 0) printf("%d ", vectVoluntariosMergulhou[i]);    
      }
      printf("\n");
    } else printf("*\n");
  }

  return 0;
}
