#include <stdio.h>

int main() {
	int idade;
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);
	
	if(idade < 5) {
		printf("O nadador tem %d anos e NAO se encaixa em nenhuma categoria.", idade);
	}
	if(idade >= 5 && idade <= 7) {
		printf("O nadador tem %d anos e se encaixa na categoria Infantil A.", idade);
	} else if(idade >= 8 && idade <= 10) {
		printf("O nadador tem %d anos e se encaixa na categoria Infantil B.", idade);
	} else if(idade >= 11 && idade <= 13) {
		printf("O nadador tem %d anos e se encaixa na categoria Juvenil A.", idade);
	} else if(idade >= 14 && idade <= 17) {
		printf("O nadador tem %d anos e se encaixa na categoria Juvenil B.", idade);
	} else if(idade >= 18) {
		printf("O nadador tem %d anos e se encaixa na categoria Adulto.", idade);
	}
}


