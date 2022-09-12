#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Receba 5 numeros inteiros e mostre como resultado: Qual a soma dos numeros pares
//Qual foi o maior número impar. no maximo 4 variaveis
int main() {
	setlocale(LC_ALL, "");
	int cont;
	int valor;
	int soma=0;
	int impar=0;
	for(cont=0; cont<5; cont++){
		printf("Digite um valor: ");
		scanf("%d", &valor);
			if(valor%2==0){
				soma+=valor;
			}
			if(valor%2 != 0 && valor > impar){
				impar=valor;
			}
	}
	printf("A soma é: %d\n", soma);
	printf("O maior valor impar é: %d", impar);
	
}
