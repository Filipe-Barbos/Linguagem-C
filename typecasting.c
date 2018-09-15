# include <stdio.h>
# include <stdlib.h>

int main() {
	
	int n1, n2;
	float result, type;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	result = (float)n1 / (float)n2;
	
	type = (float)n1;
	
	printf("O resultado e %.1f \n", result);
	
	printf("%d \n", n1);
	printf("%f \n", type);
	system("pause");
}

