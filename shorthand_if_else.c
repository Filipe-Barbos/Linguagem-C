# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	// Usando termo unário
	(num % 2 == 0) ? printf("É um número par. \n") : printf("É um número impar. \n");
	
	// Outra forma de saida
	printf("O número digitado é %s s\n", (num % 2 == 0 ? "par" : "impar"));
	
	system("pause");
}

