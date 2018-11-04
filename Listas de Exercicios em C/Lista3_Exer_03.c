# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	float H;
	int N, i;
	
	printf("Informe o valor de N: ");
	scanf("%i", &N);
	for (i = 1; i <= N; i++){
	H += 1 / (float)i;
	}
	
	printf("Valor final de H: %.2f \n", H);
	system("pause");
}
