#include <stdio.h>

main() {
	int tipo;
	float kwh, total;
	
	printf("Insira o tipo de cliente que voce se encaixa:\n");
	printf("(1) para Residencia\n");
	printf("(2) para Comercio\n");
	printf("(3) para Industria\n");
	printf("Tipo: ");
	scanf("%d", &tipo);
	
	if(tipo == 1 || tipo == 2 || tipo == 3) {
	} else {
		printf("Tipo de cliente nao encontrado.");
		return 0;
	}
	
	printf("Informe seu consumo total em kW/h: ");
	scanf("%f", &kwh);
	
	if(tipo == 1) {
		total = kwh * 0.6;
	} else if(tipo == 2) {
		total = kwh * 0.48;
	} else if(tipo == 3) {
		total = kwh * 1.29;
	} else {
		return 0;
	}
	
	printf("O valor total da conta de luz a ser pago sera de R$%.2f.", total);
}



