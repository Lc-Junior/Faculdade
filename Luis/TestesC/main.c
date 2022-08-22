#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float c,f,celsius,fahren,celsfahren,fahrencels;
	char name;
	
	printf("Qual sua unidade de Temperatura?\nDigite C para Celsius ou F para Fahrenheit!\n");
	scanf("%s", &name);
	
	if(name == 'c'){
		printf("Já que sua unidade é Celsius, vou transformá-la para Fahrenheit!\n");
		printf("Digite a temperatura: ");
		scanf("%f", &celsius);
		celsfahren = (celsius*1.8) + 32;
		printf("Em Fahrenheit, %f Celsius equivalem a %.1fºGraus", celsius,celsfahren);
	}
	if(name == 'f'){
		printf("Já que sua unidade é Fahrenheit, irei transformá-la em Celsius!\n");
		printf("Qual a temperatura: ");
		scanf("%f", &fahren);
		fahrencels = (fahren - 32)/1.8;
		printf("Em Celsius, %f Fahrenheit equivalem a %.1fºGraus", fahren,fahrencels);
	}
}
