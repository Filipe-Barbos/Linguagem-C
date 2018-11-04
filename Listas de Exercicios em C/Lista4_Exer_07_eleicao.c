# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int voto, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nulo = 0, branco = 0, total;
	float rc1, rc2, rc3, rc4, rNulo, rBranco;
	do{
		puts("---- ELEIÇÕES 2018 -----");
		puts("Candidatos: 1 - 2 - 3 - 4");
		puts("Voto Nulo - 5");
		puts("Voto em Branco - 6");
		puts("Digite 0 Para o Fim Da Votação");
		printf("Voto: ");
		scanf("%d", &voto);
		
		while ((voto < 0) || (voto > 6)){
			puts("OPÇÃO INVÁLIDA!");
			puts("---- ELEIÇÕES 2018 -----");
			puts("Candidatos: 1 - 2 - 3 - 4");
			puts("Voto Nulo - 5");
			puts("Voto em Branco - 6");
			puts("Digite 0 Para o Fim Da Votação");
			printf("Voto: ");
			scanf("%d", &voto);
		}
		
		switch (voto){
			case 1:
				cand1++;
			break;
			case 2:
				cand2++;
			break;
			case 3:
				cand3++;
			break;
			case 4:
				cand4++;
			break;
			case 5:
				nulo++;
			break;
			case 6:
				branco++;
			break;
		}
	}while (voto != 0);
	
	total = cand1 + cand2 + cand3 + cand4 + nulo + branco;
	
	rc1 = (float)100 * cand1/ total;
	rc2 = (float)100 * cand2/ total;
	rc3 = (float)100 * cand3/ total;
	rc4 = (float)100 * cand4/ total;
	rNulo = (float)100 * nulo/ total;
	rBranco = (float)100 * branco/ total;
	printf("Total de votos: %d \n", total);
	printf("----- RESULTADO FINAL -----\n");
	printf("Candidato 1: %d votos - %.2f%% do total. \n", cand1, rc1);
	printf("Candidato 2: %d votos - %.2f%% do total. \n", cand2, rc2);
	printf("Candidato 3: %d votos - %.2f%% do total. \n", cand3, rc3);
	printf("Candidato 4: %d votos - %.2f%% do total. \n", cand4, rc4);
	printf("Nulo: %d votos - %.2f%% do total. \n", nulo, rNulo);
	printf("Branco: %d votos - %.2f%% do total. \n", branco, rBranco);
	system("pause");
}

