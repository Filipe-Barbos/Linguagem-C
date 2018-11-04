# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char T, B, R, resp;
	int total, qtd, qT = 0, qB = 0, qR = 0;
	float pT, pB, pR;
	
	puts("Tipos de Vinhos");
	puts(" T - Tinto");
	puts(" B - Branco");
	puts(" R - Rosê");
	puts(" Digite F para sair");
	printf("Tipo de vinho escolhido: ");
	resp = getche();
	puts("");
		
	while (tolower(resp) != 'f'){
		switch (resp){
			case ('t'):
			case ('T'):
				printf("Quantidade de vinho tinto: ");
				scanf("%d", &qtd);
				qT += qtd;
				break;
			case ('b'):
			case ('B'):
				printf("Quantidade de vinho branco: ");
				scanf("%d", &qtd);
				qB += qtd;
				break;
			case ('r'):
			case ('R'):
				printf("Quantidade de vinho rosê: ");
				scanf("%d", &qtd);
				qR += qtd;
				break;
			default:
				puts("Opção Inválida.");
			break;
		}
		puts("Tipos de Vinhos");
		puts(" T - Tinto");
		puts(" B - Branco");
		puts(" R - Rosê");
		puts(" Digite F para sair");
		printf("Tipo de vinho escolhido: ");
		resp = getche();
		puts("");
	} 
	
	total = qT + qB + qR;
	pT = qT * 100 / (float)total;
	pB = qB * 100 / (float)total;
	pR = qR * 100 / (float)total;
	puts("");
	printf("Vinho Tinto: %.1f%% \n", pT);
	printf("Vinho Branco: %.1f%% \n", pB);
	printf("Vinho Rosê: %.1f%% \n", pR);
	system("pause");
}

