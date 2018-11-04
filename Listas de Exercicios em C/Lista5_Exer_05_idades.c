# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int idade[100], cont = 0, i, maior = 0;
	float media, soma;
	char resp;
	
	do{
		printf("Idade da %dº pessoa: ", cont + 1);
		scanf("%d", &idade[cont]);
		soma += idade[cont];		
		// Verificando maior idade
		if (idade[cont] > maior){
			maior = idade[cont];
		}
		cont++;
		printf("Deseja cadastrar outra idade? (S / N): ");
		resp = getche();
		puts("");
		if (toupper(resp) == 'N'){
			break;
		}
	} while (cont < 100);
	puts("");
	media = soma / cont;	
	printf("Media das idades: %.1f \n", media);
	puts("");

	// Exibindo maior idade e posição
	printf("Maior idade é %d \n", maior);
	for (i = 0; i < cont; i++){
		if (idade[i] == maior){
			printf("na posição %d \n", i);
		}		
	}
	puts("");
	system("pause");
}

