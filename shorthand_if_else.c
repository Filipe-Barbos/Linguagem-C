# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	
	// Usando termo un�rio
	(num % 2 == 0) ? printf("� um n�mero par. \n") : printf("� um n�mero impar. \n");
	
	// Outra forma de saida
	printf("O n�mero digitado � %s s\n", (num % 2 == 0 ? "par" : "impar"));
	
	system("pause");
}

