# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char placa[7];
	float velocidade;

	// Lendo a placa e a velocidade do carro 
	printf("Qual é a placa do veiculo: ");
	scanf("%s", &placa);
	printf("Qual a velocidade do carro: ");
	scanf("%f", &velocidade);
	puts("");
	   
	// Verificando se a velocidade é maior que 80 km/h
	if (velocidade > 80) {
		printf("ATENÇÃO - veiculo de placa %s \n", placa);
		puts("Você está andando a uma velocidade acime de 80Km/h");
	    puts("Reduza a velocidade ou será multado");
	}else{
		printf("Veiculo de placa %s \n", placa);
	    puts("Você está dentro da velocidade permitida.");
	}
	
	system("pause");
}
