#include <stdio.h>

int main (void){
    float IMC;

    printf("Digite o seu IMC:");
    scanf("%f", &IMC);
    
    if (IMC >= 18.5) {
        if (IMC <= 24.9) {
            puts("Intervalo Normal");
        } else {
            puts("Fora do Intervalo Normal");
        }
    } else {
        puts("Fora do Intervalo Normal");
    }
    return 0;
}