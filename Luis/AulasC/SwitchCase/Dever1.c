#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int n1,n2;
	int valor=0;
	int ct=1;
		printf ("Digite um número: \n");
  		scanf("%d", &n1);
  		printf ("Digite mais um número: \n");
  		scanf("%d", &n2);
  		
  		printf("1. Soma");
  		printf("\n2. Subtração");
  		printf("\n3. Multiplicação");
  		printf("\n4. Divisão");
  		printf("\n5. Listar os números digitados");
  		printf("\n6. Sair\n\n");
  		scanf("%d", &valor);
  		
  switch (valor)
  {
    case 1 :
    printf ("\nA Soma dos números foi: %d\n",n1+n2);
    break;
    
    case 2 :
    printf ("\nA Subtração dos números foi: %d\n",n1-n2);
    break;
    
    case 3 :
    printf ("\nA Multiplicação dos números foi: %d\n",n1*n2);
    break;
    
    case 4 :
    printf ("\nA Divisão dos números foi: %d\n",n1/n2);
    break;
    
    case 5 :
    printf ("\nA Lista dos números informados foi: %d, %d\n",n1, n2);
    break;
    
    case 6 :
    return 0;
    break;
        
    default :
    printf ("Valor inválido!\n");
  }
  
}


