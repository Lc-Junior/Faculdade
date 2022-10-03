#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Programa que receba duas notas de 5 alunos e mostre como resultado:
//Maior media da turma, Qual foi a media da turma
//OBS: Utilizar no máximo 6 variáveis

int main() {
	setlocale(LC_ALL, "");
	float media, mediaturma,maiormedia;
	float nota1,nota2;
	int cont;
	
	for(cont=0; cont<5; cont++){
		printf("Digite a nota do 1 aluno número %d: ", cont+1);
		scanf("%f", &nota1);
		printf("Digite a nota do 2 aluno número %d: ", cont+1);
		scanf("%f", &nota2);
		media = (nota1+nota2)/2;
		mediaturma += media;
		if(media > maiormedia){
			maiormedia = media;
		}
	}
	printf("A maior media da turma foi de: %.2f\n",maiormedia);
	printf("A media da turma foi de %.2f", mediaturma/5);
	
	return 0;
}
