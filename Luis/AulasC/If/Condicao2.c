#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fa�a um programa que receba 3 valores de entrada e mostre qual o maior deles

int main() {
	setlocale(LC_ALL,"");
	float n1,n2,n3;
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	printf("Digite o terceiro n�mero: ");
	scanf("%f", &n3);
	if(n1 > n2 && n1 > n3){
		printf("O n�mero %.2f � o maior que escolheu",n1);
	}
	if(n2 > n1 && n2 > n3){
		printf("O n�mero %.2f � o maior que escolheu",n2);
	}
	if(n3 > n1 && n3 > n2){
		printf("O n�mero %.2f � o maior que escolheu",n3);
	}
	
}
