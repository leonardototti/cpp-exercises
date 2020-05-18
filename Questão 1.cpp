#include <stdio.h>
#include <math.h>

int main() {
	int lado1, lado2, lado3;
	bool verify;
	
	printf("Digite um valor para o primeiro lado do triangulo: ");
	scanf("%d", &lado1);
	printf("Digite um valor para o segundo lado do triangulo: ");
	scanf("%d", &lado2);
	printf("Digite um valor para o terceiro lado do triangulo: ");
	scanf("%d", &lado3);
	
	if(fabs(lado2 - lado3) < lado1 < lado2 * lado3) {
		verify = true;
	} else if(fabs(lado1 - lado3) < lado2 < lado1 * lado3) {
		verify = true;
	} else if(fabs(lado1 - lado2) < lado3 < lado1 * lado2) {
		verify = true;
	} else {
		verify = false;
	}
	
	if(verify == true) {
		if(lado1 == lado2 && lado2 == lado3) {
			printf("Triangulo equilatero.");
		} else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
			printf("Triangulo isosceles.");
		} else {
			printf("Triangulo escaleno.");
		}
	} else {
		printf("\nOs valores informados nao sao validos para formar um triangulo.");
	}
}

