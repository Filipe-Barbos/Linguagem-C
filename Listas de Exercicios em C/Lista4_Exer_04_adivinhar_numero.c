# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int numero, tentativas, palpite;
	
	printf("Digite o n�mero: ");
	scanf("%d", &numero);
	do{
		printf("A divinhe qual foi o n�mero: ");
		scanf("%d", &palpite);
		if (palpite > numero){
			puts("Tente um n�mero MENOR.");
		}else if (palpite < numero){
			puts("Tente um n�mero MAIOR. ");
		}
		
	} while (palpite != numero);
	puts("PARAB�NS! Voc� acertou o n�mero. \n");
	system("pause");
}

