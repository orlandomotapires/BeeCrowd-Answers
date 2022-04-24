#include <stdio.h>
#include <string.h>

int main(){
  char string[500], string2[500];
  int tamMaior=0, tam;

  while(scanf("%s %s", string, string2)){
    for(int j=0; j < strlen(string2); j++){
      if(strlen(strstr(string, string2)) > 0){  
        tam = strlen(strstr(string, string2));
        if(tam > tamMaior){
          tamMaior = tam;
        }
      }
    }
    printf("%d\n", tamMaior);
  }
  

  return 0;
}