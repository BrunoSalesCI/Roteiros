#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome[21];
    int i, j;


    scanf("%s", &nome);

    for(j = 0; nome[j] != '\0'; j++){

        //printf("%c\n", nome[j]);
    for(i = 0; i <= j; i++){

        printf("%c", nome[i]);

    }

    printf("\n");

    }



return 0;
}
