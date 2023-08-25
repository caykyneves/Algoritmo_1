#include <stdio.h>

int main() {
    float peso;

   
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    
    if (peso < 60.0) {
        printf("O peso e menor que 60 kg.\n");
    } else {
        printf("O peso nao e menor que 60 kg.\n");
    }

}
