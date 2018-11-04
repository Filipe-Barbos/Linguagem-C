# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	float preco, total, parcela, desconto, juros;
	int pagamento;
	printf("Informe o valor do produto: R$ ");
	scanf("%f", &preco);
	puts("");
	
	printf("------------- Formas de Pagamento --------------\n");
	printf("  1 - À vista em dinheiro com 10%% de desconto. \n");
	printf("  2 - À vista no cartão com 5%% de desconto.\n");
	printf("  3 - Em 2x sem desconto.\n");
	printf("  4 - Em 3x com 10%% de juros.\n");
	printf("Forma de pagamento escolhida: ");
	scanf("%d", &pagamento);
	puts("");
	
	printf("-------------- Finalizando A Compra --------------\n");
	switch (pagamento){
		case 1:
			desconto = preco / 100 * 10;
			total = preco - desconto;			
			printf(" Valor do produto: R$ %.2f \n", preco);
			printf(" Valor do desconto R$: %.2f \n", desconto);
			printf(" Total a pagar R$ %.2f \n", total);
		break;		
		case 2:
			desconto = preco / 100 * 5;
			total = preco - desconto;
			printf(" Valor do produto: R$ %.2f \n", preco);
			printf(" Valor do desconto: R$ %.2f \n", desconto);
			printf(" Total à pagar: R$ %.2f \n", total);
		break;
		case 3:
			parcela = preco / 2;
			printf(" Valor do produto: R$ %.2f \n", preco);
			printf(" Valor da parcela R$ %.2f \n", parcela);
		break;
		case 4:
			juros = preco / 100 * 10;
			total = preco + juros;
			parcela = total / 3;
			printf(" Valor do produto: R$ %.2f \n", preco);
			printf(" Valor total da compra: R$ %.2f \n", total);
			printf(" Valor da parcela R$: %.2f \n", parcela);
		break;
		default:
			puts(" Opção de pagamento inválida.");
	}

	system("pause");
}

