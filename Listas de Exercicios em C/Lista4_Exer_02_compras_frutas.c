# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char resp;
	int fruta, qtd, qtdAba = 0, qtdMaca = 0, qtdPera = 0;
	do{
		puts(" 1 - Abacaxi");
		puts(" 2 - Maçã");
		puts(" 3 - Pera");
		printf("Informe o número da fruta escolhida: ");
		scanf("%i", &fruta);
		while ((fruta < 1) || (fruta > 3)){
			puts("Opção inválida.");
			printf("Informe o número da fruta escolhida: ");
			scanf("%i", &fruta);
		}
		printf("Quantidade dessa fruta: ");
		scanf("%i", &qtd);
		switch (fruta){
			case 1:
				qtdAba += qtd;
				break;
			case 2:
				qtdMaca += qtd;
				break;
			case 3:
				qtdPera += qtd;
				break;
		}
		printf("Deseja escolher outra fruta? (S / N): ");
		resp = getche();
		puts("");
	} while (tolower(resp) == 's');
	
	puts("");
	printf("Quantidade de abacaxi: %d \n", qtdAba);
	printf("Quantidade de maçã: %d \n", qtdMaca);
	printf("Quantidade de pera: %d \n", qtdPera);
	system("pause");
}

