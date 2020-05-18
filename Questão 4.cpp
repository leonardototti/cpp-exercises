#include <stdio.h>

main() {
	float altura, peso;
	int sexo; // poderia ter mais que 2 nesse caso mas tudo bem.
	
	printf("Insira as informações requisitadas abaixo.\n");
	printf("(1) para masculino\n");
	printf("(2) para feminino\n");
	printf("Informe: ");
	scanf("%d", &sexo);
	
	if(sexo == 1 || sexo == 2) {	
	} else {
		printf("Valor nao encontrado para definir o sexo.");
		return 0;
	}
	
	printf("Informe sua altura em cm: ");
	scanf("%f", &altura);
	
	// verifica se o valor foi mesmo informado em cm, se sim, 
	// com certeza vai ser acima de 3, e divide por 100
	if (altura > 3) {
		altura = altura / 100;
	}
	
	if(sexo == 1) {
		peso = (72.7 * altura) - 58;
	} else if(sexo == 2) {
		peso = (62.1 * altura) - 44.7;
	}
	
	printf("\nDe acordo com os dados informados, o seu peso ideal seria de %.1f kg.", peso);
	
	return 0;
}


