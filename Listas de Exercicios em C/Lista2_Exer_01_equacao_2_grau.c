# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>


// Equa��o do 2� Grau
// Formula: b� -4ac


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
	// Formula: b� -4ac
	delta = (b * b) - 4 * a * c;
	
	printf("O valor de delta � %d \n", delta);
	
	// Verificando se delta � maior que 0	
	if (delta > 0){
		puts("Possui raizes rais.\n");
		
		// Calculando raiz de delta
		raizDelta = sqrt(delta);
		printf("A raiz de delta � + ou - %d \n", raizDelta);
		
		// Calculando x1
		x1 = (-b + raizDelta) / (2 * a);
		printf("O valor de x1 � %d \n", x1);
		
		// Calculando x2
		x2 = (-b - raizDelta) / (2 * a);
		printf("O valor de x2 � %d \n", x2);
		
	}else if (delta == 0){
		puts("Quando delta � igual a 0, a equa��o possui apenas uma raiz(nula).");
		
	}else{
		puts("Quando delta � negativo a equa��o n�o tem raizes rais.");
	}
	
	system("pause");	
}
