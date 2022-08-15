#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()	{
	setlocale(LC_ALL,"");
	system("color 8b");
	float valor1,valor2,media;
	printf("Digite sua nota1: ");
	scanf("%f",&valor1);
	printf("Digite sua nota2: ");
	scanf("%f",&valor2);
	media = ((valor1+valor2)/2);
	printf("Sua media é de: %.2f\n",media);
	if (media<6)
	{
		printf("Você foi reprovado! Burro");
	}
	else
	{
		printf("Parabéns, você foi aprovado!");
	}
}
