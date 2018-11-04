# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int cpf, dependentes;
	float renda, salarioMinimo, qtdSalario, desc, imposto;
	
	puts("--------- Calculo do Imposto de Renda ---------");
	printf("N�mero do CPF: ");
	scanf("%d", &cpf);
	printf("N�mero de dependentes: ");
	scanf("%d", &dependentes);
	printf("Valor da renda mensal R$ ");
	scanf("%f", &renda);
	printf("Valor atual do sal�rio m�nimo: R$ ");
	scanf("%f", &salarioMinimo);
	puts("");
	
	// Calculando quantidade de sal�rios m�nimos
	
	qtdSalario = renda / salarioMinimo;	
	
	// Imposto de acordo com a quantidade de s�l�rios m�nimos
	
	if (qtdSalario <= 2){
		puts("O contribuinte est� isento do imposto de renda.");
	}else if (qtdSalario > 2 && qtdSalario <= 3){
		puts("Porcentagem da al�quota: 7.5%");
		if (dependentes > 0){
			desc = (salarioMinimo / 100 * 5) * dependentes;
			imposto = (renda - desc) / 100 * 7.5;
			printf("Desconto de pedentente(s) R$ %.2f \n", desc);
			printf("Valor final do imposto de renda R$ %.2f \n", imposto);
		}else{
			imposto = renda / 100 * 7.5; 
			printf("Valor do imposto de rendaR$ %.2f \n", imposto);
		}
	}else if (qtdSalario > 3 && qtdSalario <= 5){
		puts("Porcentagem da al�quota: 15%");
		if (dependentes > 0){
			desc = (salarioMinimo / 100 * 5) * dependentes;
			imposto = (renda - desc) / 100 * 15;
			printf("Desconto de pedentente(s) R$ %.2f \n", desc);
			printf("Valor final do imposto de renda R$ %.2f \n", imposto);
		}else{
			imposto = renda / 100 * 15;
			printf("Valor do imposto de rendaR$ %.2f \n", imposto);
		}
	}else if (qtdSalario > 5 && qtdSalario <= 7){
		puts("Porcentagem da al�quota: 22.5%");
		imposto = renda / 100 * 22.5;
		if (dependentes > 0){
			desc = (salarioMinimo / 100 * 5) * dependentes;
			imposto = (renda - desc) / 100 * 22.5;
			printf("Desconto de pedentente(s) R$ %.2f \n", desc);
			printf("Valor final do imposto de renda R$ %.2f \n", imposto);
		}else{
			imposto = renda / 100 * 22.5;
			printf("Valor do imposto de rendaR$ %.2f \n", imposto);
		}
	}else if (qtdSalario > 7){
		puts("Porcentagem da al�quota: 27.5%");
		imposto = renda / 100 * 27.5;
		if (dependentes > 0){
			desc = (salarioMinimo / 100 * 5) * dependentes;
			imposto = (renda - desc) / 100 * 27.5;
			printf("Desconto de pedentente(s) R$ %.2f \n", desc);
			printf("Valor final do imposto de renda R$ %.2f \n", imposto);
		}else{
			imposto = renda / 100 * 27.5;
			printf("Valor do imposto de rendaR$ %.2f \n", imposto);
		}
	}
	system("pause");
}
