# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int n1, n2, diferenca;

   	printf("Digite um n�mero inteiro: ");
   	scanf("%d", &n1);
   	printf("Digite outro n�mero inteiro: ");
   	scanf("%d", &n2);
   
	// Verificando qual dos n�meros � maior
   	if (n1 > n2){
      	diferenca = n1 - n2;
   	}else{
   		diferenca = n2 - n1;
	}

   	printf("A diferen�a entre os n�meros � de %d \n", diferenca);
   	
	system("pause");
}
