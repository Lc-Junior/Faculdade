#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um programa que receba como dados de entrada a idade de uma pessoa, e mostre como resultado, se ela é maior de idade

int main() {
	setlocale(LC_ALL,"");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if(n1 >= 18){
		printf("Parabéns, já é maior de idade, agora já pode pagar os próprios boletos!");
	}
	else{
		printf("Menor de idade ainda");
	}
}
