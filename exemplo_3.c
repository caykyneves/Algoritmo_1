#include <stdio.h>

int main() {
    float altura;

    
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    
    if (altura > 1.8) {
        printf("A altura e maior que 1.8 metros.\n");
    } else {
        printf("A altura nao e maior que 1.8 metros.\n");
    }

  
}