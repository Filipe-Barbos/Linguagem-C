# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>


// Equação do 2º Grau
// Formula: b² -4ac


main(){
	setlocale(LC_ALL,"");
	int a, b, c, delta, raizDelta, x1, x2;
	
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	printf("Informe o valor de c: ");
	scanf("%d", &c);
	puts("");
	
	// Calculando o delta
	// Formula: b² -4ac
	delta = (b * b) - 4 * a * c;
	
	printf("O valor de delta é %d \n", delta);
	
	// Verificando se delta é maior que 0	
	if (delta > 0){
		puts("Possui raizes rais.\n");
		
		// Calculando raiz de delta
		raizDelta = sqrt(delta);
		printf("A raiz de delta é + ou - %d \n", raizDelta);
		
		// Calculando x1
		x1 = (-b + raizDelta) / (2 * a);
		printf("O valor de x1 é %d \n", x1);
		
		// Calculando x2
		x2 = (-b - raizDelta) / (2 * a);
		printf("O valor de x2 é %d \n", x2);
		
	}else if (delta == 0){
		puts("Quando delta é igual a 0, a equação possui apenas uma raiz(nula).");
		
	}else{
		puts("Quando delta é negativo a equação não tem raizes rais.");
	}
	
	system("pause");	
}
