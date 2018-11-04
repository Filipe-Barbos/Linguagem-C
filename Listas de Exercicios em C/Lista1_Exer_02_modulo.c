# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int numero, modulo;

	printf("Digite um número inteiro e descubra o seu módulo: ");
   	scanf("%d", &numero);
   
	// Verificando se o número é positivo ou negativo
   	if (numero < 0){
    	// abs significa pegar apenas o número sem sinal, positivo ou negativo.
    	modulo = abs(numero);
   	}else{
    	modulo = numero;
   	}
   
   	printf("O modulo deste número é %d \n",modulo);
	system("pause");
}
