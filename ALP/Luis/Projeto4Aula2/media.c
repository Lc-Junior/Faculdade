#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	float nota1,nota2;
	char nome[10] = "";
	printf("Qual seu nome? ");
	scanf("%s", &nome);
	printf("Agora vamos calcular sua nota, %s.", nome);
	printf("\nDigite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("\nSua primeira nota foi: %.2f e a sua segunda foi: %.2f", nota1,nota2);
	printf("\nA média das notas foram: %.2f", (nota1+nota2)/2);
}
