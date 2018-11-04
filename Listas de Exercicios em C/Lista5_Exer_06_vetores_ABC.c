# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int vetA[10], vetB[10], vetC[10], contA = 0, contB = 0, i, consulta;
	char resp, resp2 = 'n';
	
	// Recebendo valores do Vetor A	
	puts("--------- VETOR A ----------");
	do{
		printf("Valor do Vetor A posição %d: ", contA);
		scanf("%d", &vetA[contA]);
		contA++;
		if (contA != 10){
			printf("Deseja armazenar outro numero no vetor A? (S/N): ");
			resp = getche();
			puts("");
			if (toupper(resp) == 'N'){
				break;
			}
		}
	} while(contA < 10);
	
	// Recebendo valores do Vetor B	
	puts("--------- VETOR B ----------");
	do{
		printf("Valor do Vetor B posição %d: ", contB);
		scanf("%d", &vetB[contB]);
		contB++;
		if (contB != 10){
			printf("Deseja armazenar outro numero no vetor B? (S/N): ");
			resp = getche();
			puts("");
			if (toupper(resp) == 'N'){
				break;
			}
		}
	} while(contB < 10);
	puts("");
	
	// Criando vetor C = vetor A + vetor B
	for (i = 0; i < 10; i++){
		vetC[i] = vetA[i] + vetB[i];
	}
	
	printf("Informe valor para consulta no vetor C: ");
	scanf("%d", &consulta);
	
	
	for (i = 0; i < 10; i++){
		if (vetC[i] == consulta){
			printf("Valor encontrado na posição %d \n", i);
			resp2 = 's';
		}
	}
	
	if (resp2  == 'n'){
		printf("O valolr %d não foi encontrado no vetor C \n", consulta);
	}
	
	system("pause");
}

