# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int num[80], cont = 0, cont2 = 0, i, consulta;
	char resp;
	
	do{
		printf("Digite um número: ");
		scanf("%d", &num[cont]);
		cont++;
		if (cont != 80){
			printf("Deseja digitar outro número? (S / N): ");
			resp = getche();
			puts("");
			if (toupper(resp) == 'N'){
				break;
			}
		}		
	} while (cont < 80);
	puts("");
	
	printf("Digite um número para ser consultado: ");
	scanf("%D", &consulta);
	
	for (i = 0; i < cont; i++){
		if (num[i] == consulta){
			cont2++;
		}
	}
	if (cont2 != 0){
		printf("O número %d apraceu %d vez(es) \n", consulta, cont2);
		for (i = 0; i < cont; i++){
			if (num[i] == consulta){
			printf("Na posição %d \n", i);
			}	
		}
	}else{
		printf("O número %d não foi encontrado no vetor.\n", consulta);
	}
		
	system("pause");
}

