# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char nome[50];
	int i, cont = 0;
	puts("Digite seu nome Completo");
	puts("Digite # para finalizar");
	do{
		nome[cont] = getche();
		if (nome[cont] == '#'){
			break;
		}
		cont++;
	} while (cont < 50);
	puts("");
	
	puts("Nome Digitado:");
	for (i = 0; i < cont; i++){
		printf("%c", nome[i]);
	}
	puts("");
	system("pause");
}

