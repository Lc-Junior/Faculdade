 void tabela(){
  	int cont;
   for(cont=0; cont<255; cont++){
		textcolor(6);
		printf("\n %d %c",cont,cont);
	}
	}
	
	void alfabeto(){
  	int cont;
   for(cont=0; cont<255; cont++){
   	 if(cont > 64 && cont <91){
			printf("\n %d %c",cont,cont);
			textcolor(4);
		}
	  if(cont > 96 && cont <123){
			printf("\n %d %c",cont,cont);
			textcolor(5);

		}	
	}
	}

