# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int n1 = 1;
		
	printf("Valor de n1: %d \n", n1);

	// Forma cl�ssica
	printf("Usando n1 = n1 + 1: %d \n", n1 = n1 + 1);
	
	printf("Usando += : %d \n", n1 += 1);
	
	// ++n1 Primeiro incrementa depois usa a vari�vel
	printf("Usando ++n1: %d \n", ++n1);
	
	// n1++ Priemio usa a vari�vel depois incrementa	
	printf("Usando n1++  : %d \n", n1++);
	printf("Verificando depois do n1++: %d \n", n1);
		
	system("pause");
}
