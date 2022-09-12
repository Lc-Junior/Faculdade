#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	int cont;
	int v;
	int soma = 0;
	for(cont=0; cont<3; cont++){
		printf("Digite um valor: ");
		scanf("%d", &v);
		//soma = soma+v;
		soma+=v;
	}
	printf("A soma é igual a %d", soma);
}
