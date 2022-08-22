#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	if(n1%2 == 0){
		printf("Seu numero e Par");
	}
	else{
		printf("Seu numero e Impar");
	}
}
