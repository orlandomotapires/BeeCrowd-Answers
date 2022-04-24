#include <stdio.h>

int main(){
  int hi, mi, hf, mf, tempoHoras=0, tempoMin=0, tempoTotal=0, tempoIn=0, tempoFinal=0;
  scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
  tempoIn = (hi*3600 + mi * 60);
  tempoFinal = (hf*3600 + mf * 60);
  if(tempoFinal <= tempoIn) tempoFinal += 24*3600;
  tempoTotal = tempoFinal - tempoIn;
  tempoHoras += tempoTotal/3600;
  tempoMin += (tempoTotal % 3600)/60;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempoHoras, tempoMin);
  return 0;
}