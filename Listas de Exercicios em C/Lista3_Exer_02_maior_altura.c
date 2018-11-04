# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int i;
	float altura, maior;
	
	for (i = 1; i <=10; i++){
		printf("Informe a altura de %dª pessoa: ", i);
		scanf("%f", &altura);
		if (i == 1){
			maior = altura;
		}else{
			if (altura > maior){
				maior = altura;
			}
		}
	}
	
	printf("A maior altura é %.2f \n", maior);
	system("pause");
}
