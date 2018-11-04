# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int n1, n2, i, p, cont;
	
	printf("Informe o primeiro número: ");
	scanf("%d", &n1);
	printf("Informe o segundo número: ");
	scanf("%d", &n2);
	
	printf("Números primos entre %d e %d \n", n1, n2);
	for (i = n1; i <= n2; i++){
		for (p = 1; p <= i; p++){
			if( i % p == 0){
				cont++;
			}
		}
		if (cont == 2){
			printf("%d ", i);
		}
		cont = 0;		
	}
	puts("");
	system("pause");
}
