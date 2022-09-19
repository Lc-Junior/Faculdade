#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Receba salário de 5 funcionários e mostre como resultado: Qual o salário reajustado
//Até 300, 50% ...... >300, 30%
int main() {
	setlocale(LC_ALL, "");
	int cont;
	int valor = 1;
	float salario;
	for(cont=0; cont<5; cont++){
		printf("Digite o salário do funcionário %d: ", valor++);
		scanf("%f", &salario);
			if(salario <= 300){
				printf("\n\nO seu salário reajustado é de: %.2f\n\n\n", salario+(salario*0.5));
			}
			if(salario > 300){
				printf("\n\nO seu salário reajustado é de: %.2f\n\n\n", salario+(salario*0.3));
			}
	}	
}
