# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int num = 1;
	
	puts("Usando num++");
	while (num <= 10){
		printf("Valor de num: %d \n", num);
		num++;
	}
	printf("Valor de num depois do loop: %d \n", num);
	
	
	num = 1;
	puts("Usando ++num");
	while (num <= 10){
		printf("Valor de num: %d \n", num);
		++num;
	}
	
	printf("Valor final de num: %d \n", num);
	
	system("pause");
}
