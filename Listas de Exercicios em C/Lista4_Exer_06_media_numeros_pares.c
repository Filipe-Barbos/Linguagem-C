# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int num, cont, soma;
	float media;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	while (num != 0){		
		if (num % 2 == 0){
			soma += num;
			cont++;
		}
		printf("Digite um n�mero: ");
		scanf("%d", &num);
	} 	
	printf("Valor de cont: %d \n", cont);
	media = soma / (float) cont;
	printf("A m�dia dos n�meros pares foi : %.2f \n", media);
	system("pause");
}

