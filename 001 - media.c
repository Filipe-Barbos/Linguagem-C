# include <stdio.h>
# include <stdlib.h>

float n1, n2, n3, media;

main() {
	printf("Digite o primeiro nota: ");
	scanf("%f", &n1);
	printf("Digite o segundo nota: ");
	scanf("%f", &n2);
	printf("Digite o terceiro nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf("A media entre as 3 notas e %.1f \n", media);
	system("pause");
}

