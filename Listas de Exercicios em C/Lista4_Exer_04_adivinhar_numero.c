# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int numero, tentativas, palpite;
	
	printf("Digite o número: ");
	scanf("%d", &numero);
	do{
		printf("A divinhe qual foi o número: ");
		scanf("%d", &palpite);
		if (palpite > numero){
			puts("Tente um número MENOR.");
		}else if (palpite < numero){
			puts("Tente um número MAIOR. ");
		}
		
	} while (palpite != numero);
	puts("PARABÉNS! Você acertou o número. \n");
	system("pause");
}

