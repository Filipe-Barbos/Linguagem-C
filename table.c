# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int x, y, cont;
	cont = 1;
	
	puts("Criando uma tabela");
	for (x = 1; x <= 3; x++){
		for (y = 1; y <= 3; y++){
			printf("| %d |", cont);
			cont++;
		}
		puts("");
	}
	system("pause");	
}
