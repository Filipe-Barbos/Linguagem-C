# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	float A = 1.50, F = 1.10;
	int anos;
	
	while ( A >= F){
		A += 0.02;
		F += 0.03;
		anos += 1;
		printf("Ano %d: Anacleto: %.2f metros, Felisberto %.2f metros \n", anos, A, F);
	}
	printf("Após %d anos, Felisberto terá %.2f metros e Anacleto terá %.2f metros.\n ", anos, F, A);
	system("pause");
}
