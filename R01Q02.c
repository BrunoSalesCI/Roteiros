#include <stdio.h>
#include <stdlib.h>

int main(void){
	float salario, desconto, liquido;

	printf("Digite o valor do seu salário bruto: ");
	scanf("%f", &salario);

	if(salario < 420){
		desconto = 0.08;
		liquido = salario - (salario - desconto);
	}
	if(salario > 420 && salario < 1350){
		desconto = 0.09;
		liquido = salario - (salario - 0.09);
	}
	else{
		desconto = 0.1;
		liquido = salario - (salario - 0.1);
	}


	printf("O valor do desconto do INSS relativo ao seu salario foi de: %f.\n O seu salario liquido eh de: %f", desconto, liquido);



return 0;
}
