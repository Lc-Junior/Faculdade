#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa que receba como dados de entrada o sal�rio de 5 funcion�rios
a) A soma dos descontos de imposto de renda, onde � calculado 14%
b) Qual foi o maior sal�rio digitado
c)A lista de todos os sal�rios digitados*/

int main() {
	setlocale(LC_ALL,"");
	float salario[5];
	int cont;
	float desconto=0;
	float maiorsalario=0;
	
	for(cont=0;cont<5;cont++){
		printf("Digite o sal�rio do %d� funcion�rio: ", cont+1);
		scanf("%f", &salario[cont]);
			
			desconto += (salario[cont]*0.14);

		if(salario[cont] > maiorsalario){
			maiorsalario = salario[cont];
		}
	}
	printf("O maior sal�rio digitado foi: %.2f\n\n",maiorsalario);
	printf("O valor da soma dos descontos de imposto de renda � de: %.2f\n\n", desconto);
	
	for(cont=0;cont<5;cont++){
	printf("O %d� sal�rio digitado foi: %.2f\n", cont+1,salario[cont]);
	}
}
