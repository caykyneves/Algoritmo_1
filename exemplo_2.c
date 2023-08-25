#include <stdio.h>



int main() {
    float salario;
    float salariominimo =  1320.00;

    
    printf("Digite o salario: ");
    scanf("%f", &salario);

    
    if (salario > salariominimo) {
        printf("Ganha mais que o salario minimo.\n");
    } else {
        printf("Nao ganha mais que o salario minimo.\n");
    }

    
}