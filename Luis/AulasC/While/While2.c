#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que receba como dados de entrada várias vendas de uma loja e mostre como resultado:
O total de desconto do dia
Qual foi a maior venda
Obs: O desconto máximo é de 10%*/

int main() {
	setlocale(LC_ALL, "");
	int ct=1;
	int i=1;
	float venda=0;
	int desconto=0;
	float maiorvenda=0;
	int totaldesconto=0;
	while(ct != 0){
		printf("Digite o valor da %dª venda: ",i++);
		scanf("%f", &venda);
			if(venda > maiorvenda){
				maiorvenda+= venda;
			}
		printf("Digite o valor do desconto de 0 a 10%%: ");
		scanf("%d", &desconto);
			if(desconto <= 10){
				totaldesconto += desconto; 
			}
			if(venda > maiorvenda){
				maiorvenda = venda;	
			}
		
		printf("\n\nDigite 1 para Informar mais uma venda ou 0 para sair! ");
		scanf("%d", &ct);
		
	}
	printf("\nO Desconto total foi de: %d%%", totaldesconto);
	printf("\n\nA maior venda foi: %.2f", maiorvenda);
	return 0;
}
