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
tp_pilha pilha;
tp_item e;
char exp[1001];
int c, tam, incorreto, r;

  while(scanf("%s", &exp) != EOF){
    incorreto = 0;
    tam = strlen(exp);
    inicializa_pilha(&pilha);
    for(c = 0; c < tam; c++){
      if(exp[c] == '('){ 
        push(&pilha, exp[c]);
      }      
      if(exp[c] == ')'){ 
        if(!pop(&pilha,&e)){
          incorreto = 1;
        }
      }  
      
    }  
    
    if(!pilha_vazia(&pilha) || incorreto) printf("incorrect\n");
    else printf("correct\n");
  } 
  return 0;
}