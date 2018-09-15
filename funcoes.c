# include <stdio.h>
# include <stdlib.h>

int Primo(n1){
	int cont, i;
	for (i = 1; i <= n1; i++){
		if (n1 % i == 0){
			cont++;
		}
	}
	
	if (cont == 2){
		return 1;
	}else{
		return 0;
	}
}

int Divisores(n1){
	int i, div;
	printf("Divisores de %d \n", n1);
	for (i = 1; i <= n1; i++){
		if (n1 % i == 0){
			div = n1 / i;
			printf("%d / %d = %d \n", n1, i, div);
		}
	}
	return 0;
}

main(){
	
	int n1, result;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	result = Primo(n1);

	if (result == 1){
		printf("%d e um numero primo. \n", n1);
	}else{
		printf("%d nao e um numero primo. \n", n1);
	}
	
	// Rerificando os divisores
	Divisores(n1);
	
	system("pause");
}
