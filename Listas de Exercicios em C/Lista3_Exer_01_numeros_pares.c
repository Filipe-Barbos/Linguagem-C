# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int i;
	
	puts("Todos os n�meros pares de 1 a 100");
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0){
			printf("%d \n", i);
		}
	}
	system("pause");
}
