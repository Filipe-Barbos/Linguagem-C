# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	float La, Lb, Lc;

   	puts("Digite tr�s valores e descubra se eles formam um tri�ngulo!!!");
   	puts("");
   	printf("Digite o primeiro valor: ");
   	scanf("%f", &La);
   	printf("Digite o segundo valor: ");
   	scanf("%f", &Lb);
   	printf("Digite o terceiro valor: ");
   	scanf("%f", &Lc);
   	puts("");
   
	// REGRA PARA FORMAR UM TRI�NGULO:
	// a soma de dois valores tem que ser maior que a do terceiro

	// Verificando se os valores formam um tri�ngulo
	if ((La + Lb >  Lc) && (La + Lc > Lb) && (Lb + Lc > La)){
    	puts("Os tr�s valores formam um tri�ngulo.");
   	}else{
        puts("Os tr�s valores n�o formam um tri�ngulo.");
   }
   	
	system("pause");
}
