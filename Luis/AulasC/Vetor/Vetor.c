#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int cont;
	int media=0;
	int valores[5];
	srand(time(NULL));
	for(cont=0;cont<5;cont++) {
		valores[cont] = rand() % 100;
	media += valores[cont];
}
printf("--------Lista dos Valores Aleatórios--------\n\n");
for(cont=0;cont<5;cont++) {
	printf("O %dº valor gerado foi: %d\n", cont+1, valores[cont]);
}
printf("A Media dos valores é de: %d", media/5);
	return 0;
	
}
