#include <stdio.h>
#include <stdlib.h>

int Converte(int h){
    if(h > 12){
        h -= 12;
    }
    return h;
  }


int main(){

    int hr, mn, hn;

    printf("Digite a hora e o minuto: ");
    scanf("%d %d", &hr, &mn);


    printf("A hora atual eh: %d:%d", Converte(hr), mn);


return 0;
}
