#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Receba sal�rio de 5 funcion�rios e mostre como resultado: Qual o sal�rio reajustado
//At� 300, 50% ...... >300, 30%
int main() {
	setlocale(LC_ALL, "");
	int cont;
	int valor = 1;
	float salario;
	for(cont=0; cont<5; cont++){
		printf("Digite o sal�rio do funcion�rio %d: ", valor++);
		scanf("%f", &salario);
			if(salario <= 300){
				printf("\n\nO seu sal�rio reajustado � de: %.2f\n\n\n", salario+(salario*0.5));
			}
			if(salario > 300){
				printf("\n\nO seu sal�rio reajustado � de: %.2f\n\n\n", salario+(salario*0.3));
			}
	}	
}
