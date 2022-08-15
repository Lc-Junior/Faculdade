#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	float venda,desconto;
	printf("Olá, vamos ver quanto ficaria sua compra com desconto!");
	printf("\nQuanto deu a sua compra? ");
	scanf("%f", &venda);
	desconto = venda-(venda*0.1);
	printf("Com desconto de 10%%, sua compra sairia por: %.2f", desconto);
	return 0;
}
