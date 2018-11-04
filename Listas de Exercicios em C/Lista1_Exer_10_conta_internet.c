# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int horas; 
	float valor, total;

   	printf("Informe quantas horas foram utilizadas: ");
   	scanf("%d", &horas);
   
   	valor = 30;
   
   	if(horas <= 20){
    	total = valor;
   	}else{
        total = valor + (horas - 20) * 3;
	}
   
   	printf("Total a pagar da conta de internet: R$ %.2f \n", total);
   
	system("pause");
}
