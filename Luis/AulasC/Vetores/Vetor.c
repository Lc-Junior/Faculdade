#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba como dados de entrada 5 vendas, e mostre como resultado
a) Soma de todas as vendas
b) A lista com todas as vendas */

int main() {
	setlocale(LC_ALL,"");
	float venda[5];
	int cont;
	float soma=0;
	for(cont=0;cont<5;cont++){
		printf("Digite o valor da sua venda: ");
		scanf("%f", &venda[cont]);
		soma += venda[cont];
	}
	printf("A soma de todas as vendas foi de: %.2f\n\n",soma);
	
	for(cont=0;cont<5;cont++){
	printf("A %d ª venda digitada foi: %.2f\n", cont+1,venda[cont]);
	}
}
