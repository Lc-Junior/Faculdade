#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fa�a um programa que receba como dados de entrada a idade de uma pessoa, e mostre como resultado, se ela � maior de idade

int main() {
	setlocale(LC_ALL,"");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if(n1 >= 18){
		printf("Parab�ns, j� � maior de idade, agora j� pode pagar os pr�prios boletos!");
	}
	else{
		printf("Menor de idade ainda");
	}
}
