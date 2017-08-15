#include <stdio.h>
#include <stdlib.h>


int eh_divisivel(int num, int div){
    if(num % div == 0){
        puts("Eh divisivel");
        return 1;
    }else{
        puts("Nao eh divisivel");
        return 0;
    }
}

int eh_primo(int num){
    int i;
    int contador = 0;

    for(i = 1; i <= num; i++){
        if(eh_divisivel(num, i) == 1){
            contador = contador + 1;
        }
    }
    if(contador > 2){
        printf("Nao eh primo");
        return 0;
    }else{
        puts("Eh primo");
        return 1;

    }
}


int main(){
    int i, numero, divisor;

    printf("Digite o numero para ser dividido: \n");
    scanf("%d", &numero);

    eh_primo(numero);

    return 0;
}
