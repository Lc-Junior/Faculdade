#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Fa�a um programa que receba como dados de entrada 5 n�meros inteiros gerados de forma autom�tica e mostre como resultado:
a)A lista com os n�meros gerados
b)A media dos numeros gerados
OBS: Os numeros devem estar entre 0 e 100*/

int main() {
	setlocale(LC_ALL,"");
	int numero[5];
	int media;
	int cont;
	srand(time(NULL));
	
	for(cont=0;cont<5;cont++){
		numero[cont] = rand() % 100;
			media += numero[cont];
	}
		for(cont=0;cont<5;cont++){
		printf("O primeiro numero gerado foi: %d\n", numero[cont]);

	}
		printf("A media foi: %d\n", media/5);
}

