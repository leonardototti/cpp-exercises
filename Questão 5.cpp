#include <stdio.h>

main() {
	int codigo, qtd;
	float total;
	
	printf("==================================\n");
	printf("Especificacao    Codigo   Preço\n");
	printf("Cachorro quente   100      2,00\n");
	printf("Bauru simples     101      2,50\n");
	printf("Hamburguer        102      5,00\n");
	printf("Cheese bacon      103      7,00\n");
	printf("Cheese burger     104      6,00\n");
	printf("Refrigerante      105      4,00\n");
	printf("==================================\n");
	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);
	
	if(codigo == 101 || codigo == 102 || codigo == 103 || codigo == 104 || codigo == 105) {
	} else {
		printf("\nNao foi encontrado nenhum produto com esse codigo!\n");
		return 0;
	}
	
	printf("Informe a quantidade desse produto: ");
	scanf("%d", &qtd);
	
	if(codigo == 100) {
		total = qtd * 2;
	} else if(codigo == 101) {
		total = qtd * 2.5;
	} else if(codigo == 102) {
		total = qtd * 5;
	} else if(codigo == 103) {
		total = qtd * 7;
	} else if(codigo == 104) {
		total = qtd * 6;
	} else if(codigo == 105) {
		total = qtd * 4;
	} else {
		return 0;
	}
	
	printf("O total a ser pago deve ser R$%.2f.", total);
	return 0;
}


