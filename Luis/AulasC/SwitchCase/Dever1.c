#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int n1,n2;
	int valor=0;
	int ct=1;
		printf ("Digite um n�mero: \n");
  		scanf("%d", &n1);
  		printf ("Digite mais um n�mero: \n");
  		scanf("%d", &n2);
  		
  		printf("1. Soma");
  		printf("\n2. Subtra��o");
  		printf("\n3. Multiplica��o");
  		printf("\n4. Divis�o");
  		printf("\n5. Listar os n�meros digitados");
  		printf("\n6. Sair\n\n");
  		scanf("%d", &valor);
  		
  switch (valor)
  {
    case 1 :
    printf ("\nA Soma dos n�meros foi: %d\n",n1+n2);
    break;
    
    case 2 :
    printf ("\nA Subtra��o dos n�meros foi: %d\n",n1-n2);
    break;
    
    case 3 :
    printf ("\nA Multiplica��o dos n�meros foi: %d\n",n1*n2);
    break;
    
    case 4 :
    printf ("\nA Divis�o dos n�meros foi: %d\n",n1/n2);
    break;
    
    case 5 :
    printf ("\nA Lista dos n�meros informados foi: %d, %d\n",n1, n2);
    break;
    
    case 6 :
    return 0;
    break;
        
    default :
    printf ("Valor inv�lido!\n");
  }
  
}


