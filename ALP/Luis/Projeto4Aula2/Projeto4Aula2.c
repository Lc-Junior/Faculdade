#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	float nota1,nota2,media;
	char nome[20] = "";
	printf("Qual seu nome? ");
	scanf("%s", &nome);
	printf("Agora vamos calcular sua nota, %s.", nome);
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Sua primeira nota foi: %f e a sua segunda foi: %f", nota1,nota2);
	printf("A média das notas foram: %f!", media);
}
