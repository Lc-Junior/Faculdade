#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba como dados de entrada vários numeros e informe.
Quantas vezes o programa rodou
Qual a media dos números informados */
/*Faça um programa que receba como dados de entrada várias vendas de uma loja e mostre como resultado:
O total de desconto do dia
Qual foi a maior venda
Obs: O desconto máximo é de 10%*/

int main() {
	setlocale(LC_ALL, "");
	int ct=1;
	int vezes=0;
	float media=0;
	int n;
	while(ct != 0){
		printf("Digite um número: ");
		scanf("%d", &n);
		media+= n;
		
		printf("\n\nDigite 1 para continuar ou 0 para sair!");
		scanf("%d", &ct);
		
		vezes+= ct;
		vezes++;
	}
	printf("\n\nO programa rodou %d vezes!", vezes);
	printf("\nA média dos numeros informados foi de: %.2f", media/vezes);
	return 0;
}
