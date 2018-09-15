# include <stdio.h>
# include <stdlib.h>

float n1, n2, n3, media;

main(){
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	media = (((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10);
	printf("A media ponderada entre as 3 notas e %.1f \n", media);
	system("pause");
}

