#include <stdio.h>
#include <stdlib.h>

int main(){
  int h1, m1, h2, m2;
  while(h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0){
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    int comeco = h1*60 + m1, final = h2*60 + m2;
    int tempoDeSono = final - comeco; 
    if (comeco >= final){
      tempoDeSono += 60*24;
    }   
    if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) break;
    printf("%d\n", tempoDeSono);
  }
  return 0;
}