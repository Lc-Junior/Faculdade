#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int valor1,valor2,soma,multi,resto;
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	
	soma = valor1 + valor2;
	multi = valor1 * valor2;
	resto = valor1 % valor2;
	
	printf("A soma dos seus n�meros d�: %d.", soma);
	printf("\nA multiplica��o dos seus n�meros d� %d.", multi);
	printf("\nO resto da divis�o desses n�meros d�: %d.", resto);
	system("pause");
}


