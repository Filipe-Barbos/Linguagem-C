# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int n1, n2, diferenca;

   	printf("Digite um número inteiro: ");
   	scanf("%d", &n1);
   	printf("Digite outro número inteiro: ");
   	scanf("%d", &n2);
   
	// Verificando qual dos números é maior
   	if (n1 > n2){
      	diferenca = n1 - n2;
   	}else{
   		diferenca = n2 - n1;
	}

   	printf("A diferença entre os números é de %d \n", diferenca);
   	
	system("pause");
}
