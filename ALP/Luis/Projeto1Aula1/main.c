#include <stdio.h>
#include <stdlib.h>

main() 
{
	int valor; //declaração da variável
	system("color 8b");//mudando a cor
	printf("Digite um numero e tecle Enter: ");//mostrando mensagem
	scanf("%d",&valor);//guardando o valor digitado
	system("cls");//limpando a tela
	printf("%d",valor*2);//calculando e mostrando o resultado
}
