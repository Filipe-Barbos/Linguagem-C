# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int i, anterior, atual, proximo;
	
	printf("Informe o primeiro termo de seguência: ");
	scanf("%d", &anterior);
	printf("Informe o segundo termo de seguência: ");
	scanf("%d", &atual);

	printf("%d %d ",anterior, atual);	
	for (i = 1; i <= 18; i++){
		proximo = anterior + atual;
		printf("%d ", proximo);		
		anterior = atual;
		atual = proximo;
	}
	puts("");
	
	system("pause");
}
