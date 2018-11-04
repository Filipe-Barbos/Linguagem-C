# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int d1, d2, ct, cp;
	
	for (d1 = 1; d1 <= 6; d1++){
		for (d2 = 1; d2 <= 6; d2++){
			if ( d1 + d2 == 7){
				cp += 1;
			}
		ct += 1;
		}
	}
	
	printf("Total de possibilidades: %d \n", ct);
	printf("Possibilidades de soma igual a 7: %d \n", cp);
	printf("Probabilidade = 6/36 = 1/6 \n");
	system("pause");
}
