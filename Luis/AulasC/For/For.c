#include <stdio.h>
#include <stdlib.h>

//Registre dez numeros inteiros e mostre a soma de todos digitados, utilizar no maximo tres variaveis

int main() {
	int cont;
	int valor;
	printf("Digite um numero: ");
	scanf("%d", &valor);
	for(cont=0; cont<valor; cont++){
		printf("%d", valor-cont);
		sleep(1);
		system("cls");
	}
}
