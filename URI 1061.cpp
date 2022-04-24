#include <stdio.h>
#include <string>
#include <stdlib.h>

int main(){
  char lixo[50], tempo[50], contact[5];
  int w, x, y, z, tempoInicio=0, tempoFim=0, tempoTotal=0, cont=2;
  while(cont){
    scanf(" %s %d", lixo, &w);
    scanf(" %[^\n]s", tempo);     
    if(tempo[0] == '0' && tempo[1] != '0'){
      x = tempo[1] - '0';
    }else{
      sprintf(contact, "%d %d", tempo[0], tempo[1]);
      x = atoi(contact);
    }

    if(tempo[5] == '0' && tempo[6] != '0'){
        y = tempo[6] - '0';
    }else{
      y = 10*(tempo[5]-'0') + (tempo[6] - '0');
    }

    if(tempo[10] == '0' && tempo[11] != '0'){
        z = tempo[11] - '0';
    }else{
      z = 10*(tempo[10]-'0') + (tempo[11] - '0');
    }
    if(cont == 2) {
      tempoInicio = w* 86400 + x*3600 + y*60 + z;
    } else {
      tempoFim = w* 86400 + x*3600 + y*60 + z;
      tempoTotal = tempoFim - tempoInicio;
    }
    cont--;
  }
  int tempoFinalDias = tempoTotal/86400;
  int tempoFinalHoras = (tempoTotal%86400)/3600;
  int tempoFinalMinutos = ((tempoTotal%86400)%3600)/60;
  int tempoFinalSegundos = ((tempoTotal%86400)%3600)%60;
  
  printf("%d dia(s)\n", tempoFinalDias);
  printf("%d hora(s)\n", tempoFinalHoras);
  printf("%d minuto(s)\n", tempoFinalMinutos);
  printf("%d segundo(s)\n", tempoFinalSegundos);
  return 0;
}