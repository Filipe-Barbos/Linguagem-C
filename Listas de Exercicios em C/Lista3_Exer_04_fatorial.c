# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int i, N, fat = 1;
	
	printf("Digite um número e veja seu fatorial: ");
	scanf("%d", &N);
	
	if (N == 0){
		puts("Fatorial de 0! = 1");
	}else{	
		printf("Fatorial de %d! = ", N, N);
		for (i = N; i > 0; i--){
			fat *= i;
			if (i > 1){
				printf("%d * ", i);	
			}else{
				printf("%d = %d \n", i, fat);
			}
			
		}
	}
	
	system("pause");
}
