# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int n1, n2, n3, maior;

   	printf("Digite o primeiro n�mero: ");
   	scanf("%d", &n1);
   	printf("Digite o segundo n�mero: ");
   	scanf("%d", &n2);
   	printf("Digite o terceiro n�mero: ");
   	scanf("%d", &n3);
   
   	if ((n1 >= n2) && (n1 >= n3)){
      	maior = n1;
   	}else if ((n2 >= n1) && (n2 >= n3)){
		maior = n2;
	}else{
    	maior = n3;
	}

   	printf("O maior n�mero � %d \n", maior);
   	
	system("pause");
}
