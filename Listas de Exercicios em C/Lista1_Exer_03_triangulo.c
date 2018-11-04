# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	float La, Lb, Lc;

   	puts("Digite três valores e descubra se eles formam um triângulo!!!");
   	puts("");
   	printf("Digite o primeiro valor: ");
   	scanf("%f", &La);
   	printf("Digite o segundo valor: ");
   	scanf("%f", &Lb);
   	printf("Digite o terceiro valor: ");
   	scanf("%f", &Lc);
   	puts("");
   
	// REGRA PARA FORMAR UM TRIÂNGULO:
	// a soma de dois valores tem que ser maior que a do terceiro

	// Verificando se os valores formam um triângulo
	if ((La + Lb >  Lc) && (La + Lc > Lb) && (Lb + Lc > La)){
    	puts("Os três valores formam um triângulo.");
   	}else{
        puts("Os três valores não formam um triângulo.");
   }
   	
	system("pause");
}
