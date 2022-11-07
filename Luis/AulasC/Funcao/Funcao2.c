#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

float media(float numeros[], int n)
{
    int count;
    float media=0.0;
 
    for(count=0 ; count<n ; count++){
	
        media += numeros[count];
          printf("\n %0.2f \n ",numeros[count]);
     }
    return (media/n);
}



int main(void)
{
	int i, count;
	float numeros[5];
	for(i=0; i<118; i++){
		gotoxy(i,0);
		printf("*");
		gotoxy(i,29);
		printf("*");
}
	for(i=0; i<30; i++){
		gotoxy(0,i);
		printf("*");
		gotoxy(118,i);
		printf("*");
}

    for(count=0 ; count < 5 ; count++)
    {
    	gotoxy(4,3+count);
        printf("Entre com o numero %d: ", count+1);
        scanf("%f", &numeros[count]);
    }
    printf("A media desses numeros e: %.2f\n", media(numeros, 5));
    getch();
    return 0;

}
