# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int i, cont = 0, soma = 0, dados[100];
	char resp;
	do{
		printf("Digite um valor númerico: ");
		scanf("%d", &dados[cont]);
		cont++;
		printf("Deseja digitar outro número? (S / N): ");
		resp = getche();
		puts("");
		if (tolower(resp) == 'n'){			
			break;
		}
	} while (cont < 100);
	
	for (i = 0; i < cont; i++){
		soma += dados[i];
	}
	
	printf("Soma dos valores digitados: %d \n", soma);
	system("pause");
}

