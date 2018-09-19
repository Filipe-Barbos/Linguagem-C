# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int num, i;
	
	printf("Digite um número e veja seus divisores: ");
	scanf("%d", &num);
	puts("");
	
	printf("Divisores de %d \n", num);
	for (i = 1; i <= num; i++){
		if (num % i == 0){
			printf("%d / %d = %d \n", num, i, num / i);
		}
	}
	
	system("pause");
}
