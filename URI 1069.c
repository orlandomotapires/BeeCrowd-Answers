#include<stdio.h>
#include<string.h>
#define MAX 100
typedef char
  tp_item;

typedef struct{
  int topo;
  tp_item item[MAX];
}tp_pilha;

void inicializa_pilha(tp_pilha *p){
  p -> topo = -1;
}

int pilha_cheia(tp_pilha *p){
  if(p -> topo == MAX - 1) {
    return 1;
  } else {
    return 0;
  }
}

int pilha_vazia(tp_pilha *p){
  if(p -> topo == -1){
    return 1;
  } else{
    return 0;
  }
}

int push(tp_pilha *p, tp_item e){
  if(pilha_cheia(p) == 1) return 0; //falha
  p -> topo++;
  p -> item[p -> topo] = e;
  return 1; ///sucesso
}

tp_item pop(tp_pilha *p, tp_item *e){
  if(pilha_vazia(p) == 1) return 0; //falha
  *e = p -> item[p -> topo];
  p -> topo --;
  return 1; // sucesso
}

int main(){
  char diamante[1000], e;
  int qtde, i, j, tam, qtdiam;
  tp_pilha pilha;
  scanf("%d", &qtde);
  for(i=1; i <= qtde; i++){
    scanf(" %[^\n]s", diamante);
    tam = strlen(diamante);
    qtdiam = 0;
    inicializa_pilha(&pilha);
    for(j = 0; j < tam; j++){
      switch(diamante[j]){
        case '<': push(&pilha, diamante[j]); 
                  break;
        case '>': if(pop(&pilha, &e)){
          qtdiam++;
        }
        break;         
      }
    }
    printf("%d\n", qtdiam);
  }
return 0;
}