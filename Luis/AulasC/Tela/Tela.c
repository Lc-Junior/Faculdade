#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

int main() {
	int i;
	for(i=0; i<118; i++){
		gotoxy(i,0);
		printf("*");
		gotoxy(i,29);
		printf("*");
}
	for(i=0; i<31; i++){
		gotoxy(0,i);
		printf("*");
		gotoxy(118,i);
		printf("*");
}

	gotoxy(55,14);
	printf("Bom Dia");
getch();
}
