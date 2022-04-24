#include <stdio.h>
int main(){
    int a, b, num, x, quociente, resto;
    scanf("%d %d", &a, &b);
    if(a<0){
      x = b;
      if(b<0) x = b * -1;
      for(resto=0; resto < x; resto++){
        num=a-resto;
        if(num%b==0) break;
      }
      quociente = num / b;
    }
    else{
      quociente = a / b;
      resto = a % b;
    }
    printf("%d %d\n", quociente, resto);
    return 0;
}