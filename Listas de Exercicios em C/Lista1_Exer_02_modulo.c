# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int numero, modulo;

	printf("Digite um n�mero inteiro e descubra o seu m�dulo: ");
   	scanf("%d", &numero);
   
	// Verificando se o n�mero � positivo ou negativo
   	if (numero < 0){
    	// abs significa pegar apenas o n�mero sem sinal, positivo ou negativo.
    	modulo = abs(numero);
   	}else{
    	modulo = numero;
   	}
   
   	printf("O modulo deste n�mero � %d \n",modulo);
	system("pause");
}
