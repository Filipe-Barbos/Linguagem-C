# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char n1[20], n2[20], n3[20];
   	float a1, a2, a3;

   	printf("Nome da primeira pessoa: ");
   	scanf("%s", &n1);
   	printf("Altura dessa pessoa: ");
   	scanf("%f", &a1);
   	printf("Nome da segunda pessoa: ");
   	scanf("%s", &n2);
   	printf("Altura dessa pessoa: ");
   	scanf("%f", &a2);
   	printf("Nome da terceira pessoa: ");
   	scanf("%s", &n3);
   	printf("Altura dessa pessoa: ");
   	scanf("%f", &a3);
   	
   	if ((a1 < a2) && (a1 < a3)){
    	printf("%s é a pessoa mais baixa com %.2f de altura \n", n1, a1);
	}else if ((a2 < a1) && (a2 < a3)){
		printf("%s é a pessoa mais baixa com %.2f de altura \n", n2, a2);
	}else if ((a3 < a1) && (a3 < a2)){
		printf("%s é a pessoa mais baixa com %.2f de altura \n", n3, a3);
	}
	
	system("pause");
}
