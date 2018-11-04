# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char resp, sexo;
	float altura, maiorAlt = 0, menorAlt, media, totAlt;
	int cont = 0;
	
	printf("Deseja cadastrar uma pessoa? (S/N): ");
	resp = getche();
	puts("");
	
	while (tolower(resp) == 's'){
		printf("Altura: ");
		scanf("%f", &altura);
		printf("Sexo: (F / M): ");
		sexo = getche();
		puts("");
		
		if (maiorAlt != 0){
			if (altura > maiorAlt){
				maiorAlt = altura;
			}
			if (altura < menorAlt){
				menorAlt = altura;
			}
		}else{
			menorAlt = altura;
			maiorAlt = altura;	
		}
		if (tolower(sexo) == 'f'){
			totAlt += altura;
			cont++;
		}		
		printf("Deseja cadastrar outra pessoa? (S/N): ");
		resp = getche();
		puts("");
	}
	
	media = totAlt / cont;
	printf("Maior altura: %.2f \n", maiorAlt);
	printf("Menor altura: %.2f \n", menorAlt);
	printf("Média de altura das mulheres: %.2f \n", media);
	
	system("pause");
}


