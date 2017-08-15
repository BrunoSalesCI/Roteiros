#include <stdio.h>
#include <stdlib.h>

int Continua(int n){
    int i, j, k;

    if(n == 1){
        return 1;
    }

    for(j = 0; j < n; j++){
        printf("\n");

        for(k = 0; k < j; k++){
            printf("%d", j);

        }
    }
    printf("\n");

    for(i = 0; i < n; i++){
        printf("%d", n);

    }

}

    int main(){

    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    Continua(n);

return 0;
}
