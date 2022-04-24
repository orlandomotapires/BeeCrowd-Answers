#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define MAX 1100
typedef char
  tp_item;

typedef struct{
  int topo;
  tp_item item[MAX];
}tp_pilha;

void inicializa_pilha(tp_pilha *p){
  p -> topo = -1;
}

int pilha_vazia(tp_pilha *p){
  if(p -> topo == -1){
    return 1;
  } else{
    return 0;
  }
}

int pilha_cheia(tp_pilha *p){
  if(p -> topo == MAX - 1) {
    return 1;
  } else {
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
  char msg[1500], p;
  int tam, k, u, qnt, g, m, i;
  float a;
  tp_pilha paux;
  tp_item e;
  inicializa_pilha(&paux);
  scanf(" %d", &qnt);
  for(g=0; g<qnt; g++){
  k=0;
  scanf(" %[^\n]s", msg);
  tam = strlen(msg);
  for(i=0; i < tam; i++){
    p = msg[i];
    if(isalpha(p)) msg[i] = msg[i] + 3;      
  }
  for(m = 0; m<tam; m++){
    push(&paux, msg[m]); 
  }
  while(!pilha_vazia(&paux)){
    pop(&paux, &e);
    msg[k] = e;
    k++;  
  }
  a = tam;
  for(u=trunc((a/2)); u<tam; u++){
    if ((msg[u] >= 32 && msg[u] <= 176 ))
    msg[u] = msg[u] - 1;
  }
printf("%s\n", msg);

}
  return 0;
}
