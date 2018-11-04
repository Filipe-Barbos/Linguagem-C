# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char palavra[10];
	int cont = 0, i;
	printf("Digite uma palavra com dez letras: ");
	do{
		palavra[cont] = getche();
	  	cont++;		
	} while (cont < 10);	
	puts("");
	
	for (i = cont; i >= 0; i--){
		printf("%c", palavra[i - 1]);
	}
	puts("");
	system("pause");
}

