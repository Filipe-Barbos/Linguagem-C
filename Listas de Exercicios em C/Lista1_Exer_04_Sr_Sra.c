# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char nome[20];
   	char sexo;

   	printf("Digite o nome: ");
   	scanf("%s", &nome);
   	printf("Informe o sexo dessa pessoa (F / M ): ");
   	sexo = getche();
   	puts("");
   
	// Verificando se é homem ou mulher
   	if ((sexo == 'f') || (sexo == 'F')){
    	printf("Ilma Sra. %s \n", nome);
   	}else if ((sexo == 'm') || (sexo == 'M')){
    	printf("Ilmo Sr. %s \n", nome);
   	}

	system("pause");
}
