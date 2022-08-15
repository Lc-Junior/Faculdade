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
	
	printf("A soma dos seus números dá: %d.", soma);
	printf("\nA multiplicação dos seus números dá %d.", multi);
	printf("\nO resto da divisão desses números dá: %d.", resto);
	system("pause");
}


