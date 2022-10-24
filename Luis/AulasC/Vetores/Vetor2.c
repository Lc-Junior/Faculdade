#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que receba como dados de entrada o salário de 5 funcionários
a) A soma dos descontos de imposto de renda, onde é calculado 14%
b) Qual foi o maior salário digitado
c)A lista de todos os salários digitados*/

int main() {
	setlocale(LC_ALL,"");
	float salario[5];
	int cont;
	float desconto=0;
	float maiorsalario=0;
	
	for(cont=0;cont<5;cont++){
		printf("Digite o salário do %dº funcionário: ", cont+1);
		scanf("%f", &salario[cont]);
			
			desconto += (salario[cont]*0.14);

		if(salario[cont] > maiorsalario){
			maiorsalario = salario[cont];
		}
	}
	printf("O maior salário digitado foi: %.2f\n\n",maiorsalario);
	printf("O valor da soma dos descontos de imposto de renda é de: %.2f\n\n", desconto);
	
	for(cont=0;cont<5;cont++){
	printf("O %d° salário digitado foi: %.2f\n", cont+1,salario[cont]);
	}
}
