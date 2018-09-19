# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	do{
		printf("%d \n", num);
		num--;
	}while(num >= 0);
	
	system("pause");
}
