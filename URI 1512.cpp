//NÃO É AUTORIA PROPRIA
#include <stdio.h>
#define MMC(a, b) ((a / mdc(a, b)) * b)
unsigned mdc(unsigned, unsigned);

int main(){
  unsigned long long n=1, a=1, b=1;               
  while(scanf("%llu %llu %llu", &n, &a, &b), n)
    printf("%llu\n", ((n/a) + (n/b)) - n / MMC(a,b)); //Geral menos interceção 
  return 0;
}

unsigned mdc(unsigned a, unsigned b){

	unsigned resto = a % b;
	while (resto){

		a = b;
		b = resto;
		resto = a % b;

	}
	return b;

}