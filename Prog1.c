#include <stdio.h>
#include <stdlib.h>


int main (void){
	int idade;
	float preco, ValorTotal, desconto;


	printf("Digite o preço do sapato");
	scanf("%f", &preco);

	printf("Digite a sua idade");
	scanf("%d", &idade);

	if(idade <= 18){
		ValorTotal = preco - (preco * 0.1);
		desconto = preco * 0.1;

	}else{
		ValorTotal = preco - (preco * 0.2);
		desconto = preco * 0.2;
		
	}

	printf("O valor total da compra eh de: %f. O seu desconto foi de: %f", ValorTotal, desconto);



return 0;
}
