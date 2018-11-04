# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char nome[20];
   	char sexo;
   	float altura, peso, pesoIdeal;


   	printf("Digite o nome: ");
   	scanf("%s", &nome);
   	printf("Informe o sexo dessa pessoa (F / M ): ");
   	sexo = getche();
   	puts("");
   	printf("Informe a altura: ");
   	scanf("%f", &altura);
   	printf("Informe o peso: ");
   	scanf("%f", &peso);
   
	// Verificando se é homem ou mulher
   	if ((sexo == 'f') || (sexo == 'F')){
   		pesoIdeal = (62.1 * altura) - 44.7;
    	printf("Ilma Sra. %s seu peso ideal é %.2f \n", nome, pesoIdeal);
   	}else if ((sexo == 'm') || (sexo == 'M')){
   		pesoIdeal = (72.5 * altura) - 58;
    	printf("Ilmo Sr. %s seu peso ideal é %.2f \n", nome, pesoIdeal);
   }
   
	system("pause");
}
