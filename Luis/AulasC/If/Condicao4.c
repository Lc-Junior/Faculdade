#include <stdio.h>
#include <stdlib.h>

int main() {
	float valor;
	printf("Digite o valor da sua compra: ");
	scanf("%f", &valor);
	if(valor < 500){
		printf("Como sua compra foi de %.2f, voce tera um desconto de 5%%, ficando por %.2f",valor,valor-valor*0.05);
	}
	else{
		printf("Ja que comprou mais de 500 reais em compra, tera um desconto de 10%%, saindo por %.2f",valor-valor*0.1);
	}
}
