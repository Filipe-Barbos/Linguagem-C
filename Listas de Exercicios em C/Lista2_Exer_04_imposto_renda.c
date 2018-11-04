# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int cpf, dependentes;
	float renda, salarioMinimo, qtdSalario, desc, imposto;
	
	puts("--------- Calculo do Imposto de Renda ---------");
	printf("Número do CPF: ");
	scanf("%d", &cpf);
	printf("Número de dependentes: ");
	scanf("%d", &dependentes);
	printf("Valor da renda mensal R$ ");
	scanf("%f", &renda);
	printf("Valor atual do salário mínimo: R$ ");
	scanf("%f", &salarioMinimo);
	puts("");
	
	// Calculando quantidade de salários mínimos
	
	qtdSalario = renda / salarioMinimo;	
	
	// Imposto de acordo com a quantidade de sálários mínimos
	
	if (qtdSalario <= 2){
		puts("O contribuinte está isento do imposto de renda.");
	}else if (qtdSalario > 2 && qtdSalario <= 3){
		puts("Porcentagem da alíquota: 7.5%");
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
		puts("Porcentagem da alíquota: 15%");
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
		puts("Porcentagem da alíquota: 22.5%");
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
		puts("Porcentagem da alíquota: 27.5%");
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
