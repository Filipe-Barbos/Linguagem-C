# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char placa[7];
	float velocidade;

	// Lendo a placa e a velocidade do carro 
	printf("Qual � a placa do veiculo: ");
	scanf("%s", &placa);
	printf("Qual a velocidade do carro: ");
	scanf("%f", &velocidade);
	puts("");
	   
	// Verificando se a velocidade � maior que 80 km/h
	if (velocidade > 80) {
		printf("ATEN��O - veiculo de placa %s \n", placa);
		puts("Voc� est� andando a uma velocidade acime de 80Km/h");
	    puts("Reduza a velocidade ou ser� multado");
	}else{
		printf("Veiculo de placa %s \n", placa);
	    puts("Voc� est� dentro da velocidade permitida.");
	}
	
	system("pause");
}
