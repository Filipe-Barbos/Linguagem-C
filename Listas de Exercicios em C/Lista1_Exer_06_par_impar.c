# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int numero;

   	printf("Digite um numero inteiro: ");
   	scanf("%d", &numero);

   	if (numero % 2 == 0) {
    	puts("É um número par.");
	}else{
    	puts("É um número impar.");
   	}
	system("pause");
}
