# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int c, juizes, nota = 0, notaCand1 = 0, notaCand2 = 0, notaCand3 = 0, maiorNota;
	char cand1[10], cand2[10], cand3[10];
	
	printf("Nome Candidato 1: ");
	scanf("%s", &cand1);
	printf("Nome Candidato 2: ");
	scanf("%s", &cand2);
	printf("Nome Candidato 3: ");
	scanf("%s", &cand3);	
	printf("Quantidade de juizes no concurso: ");
	scanf("%d", &juizes);
	
	for (c = 1; c <= juizes; c++){
		printf("Juiz %d \n", c);
		do{
			printf("Nota do candidato 1 %s: ", cand1);
			scanf("%d", &nota);
			if (nota < 0 || nota > 100){
				puts("A nota deve ser entre 0 e 100.");
			}
		} while (nota < 0 || nota > 100);
		notaCand1 += nota;
		do{
			printf("Nota do candidato 2 %s: ", cand2);
			scanf("%d", &nota);
			if (nota < 0 || nota > 100){
				puts("A nota deve ser entre 0 e 100.");
			}
		} while (nota < 0 || nota > 100);		
		notaCand2 += nota;
		
		do{
			printf("Nota do candidato 3 %s: ", cand3);
			scanf("%d", &nota);
			if (nota < 0 || nota > 100){
				puts("A nota deve ser entre 0 e 100.");
			}
		} while (nota < 0 || nota > 100);
		notaCand3 += nota;
		puts("");
	}
		
	printf("Nota Canditado 1 %s: %d \n", cand1, notaCand1);
	printf("Nota Canditado 2 %s: %d \n", cand2, notaCand2);
	printf("Nota Canditado 3 %s: %d \n", cand3, notaCand3);
	puts("");
	
	if ((notaCand1 > notaCand2) && (notaCand1 > notaCand3)){
		printf("VENCEDOR %s com a nota: %d \n", cand1, notaCand1);
	}else if  ((notaCand2 > notaCand1) && (notaCand2 > notaCand3)){
		printf("VENCEDOR %s com a nota: %d \n", cand2, notaCand2);
	}else if ((notaCand3 > notaCand1) && (notaCand3 > notaCand2)){
		printf("VENCEDOR %s com a nota: %d \n", cand3, notaCand3);
	}else{
		printf("HOUVE EMPATE NA COMPETIÇÃO. \n");
	}
	system("pause");
}

