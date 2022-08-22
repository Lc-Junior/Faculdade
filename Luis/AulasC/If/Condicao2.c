#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um programa que receba 3 valores de entrada e mostre qual o maior deles

int main() {
	setlocale(LC_ALL,"");
	float n1,n2,n3;
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	printf("Digite o terceiro número: ");
	scanf("%f", &n3);
	if(n1 > n2 && n1 > n3){
		printf("O número %.2f é o maior que escolheu",n1);
	}
	if(n2 > n1 && n2 > n3){
		printf("O número %.2f é o maior que escolheu",n2);
	}
	if(n3 > n1 && n3 > n2){
		printf("O número %.2f é o maior que escolheu",n3);
	}
	
}
