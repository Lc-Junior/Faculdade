#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que receba como dados de entrada v�rios numeros e informe.
Quantas vezes o programa rodou
Qual a media dos n�meros informados */
/*Fa�a um programa que receba como dados de entrada v�rias vendas de uma loja e mostre como resultado:
O total de desconto do dia
Qual foi a maior venda
Obs: O desconto m�ximo � de 10%*/

int main() {
	setlocale(LC_ALL, "");
	int ct=1;
	int vezes=0;
	float media=0;
	int n;
	while(ct != 0){
		printf("Digite um n�mero: ");
		scanf("%d", &n);
		media+= n;
		
		printf("\n\nDigite 1 para continuar ou 0 para sair!");
		scanf("%d", &ct);
		
		vezes+= ct;
		vezes++;
	}
	printf("\n\nO programa rodou %d vezes!", vezes);
	printf("\nA m�dia dos numeros informados foi de: %.2f", media/vezes);
	return 0;
}
