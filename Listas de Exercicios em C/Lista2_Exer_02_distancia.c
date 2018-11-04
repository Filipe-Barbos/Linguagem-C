# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

main(){
	setlocale(LC_ALL,"");
	float x1, x2, xt, y1, y2, yt, distancia;
	
	
	printf("Informe o valor de x1: ");
	scanf("%f", &x1);
	printf("Informe o valor de y1: ");
	scanf("%f", &y1);
	printf("Informe o valor de x2: ");
	scanf("%f", &x2);
	printf("Informe o valor de y2: ");
	scanf("%f", &y2);
	
	// Calculando X
	xt = (x2 - x1) * (x2 - x1);
	// Calculando Y
	yt = (y2 - y1) * (y2 - y1);
	
	// Calculando a distancia	
	distancia = sqrt( xt + yt);
	printf("Distancia entre os pontos: %.1f \n", distancia);
	
	system("pause");
}
