# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int anoAtual, anoNascimento, diasVividos;

   	printf("Qual � o ano atual: ");
   	scanf("%d", &anoAtual);
   	printf("Ano do nascimento: ");
   	scanf("%d", &anoNascimento);
   	puts("");
   	diasVividos = (anoAtual - anoNascimento) * 365;
   
   	printf("Voc� viveu aproximadamente %d dias. \n", diasVividos);
   	
	system("pause");
}
