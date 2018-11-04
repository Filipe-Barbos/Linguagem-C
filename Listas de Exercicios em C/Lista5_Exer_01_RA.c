# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int cont = 0, ra;
	float nota;
	do{
		printf("Digite o RA do aluno: ");
		scanf("%d", &ra);
		if (ra == 0){
			break;
		}
		printf("Digite a nota do aluno: ");
		scanf("%f", &nota);
		cont++;
	} while (cont < 100);
	system("pause");
}

