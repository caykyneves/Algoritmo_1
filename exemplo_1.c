#include<stdio.h>

main(){

    

    int idade;
    char nome[15];

    printf("Digite o seu nome: ");
    fgets(nome, 15, stdin);

    printf("\nDigite o sua idade:");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("%s voce e maior de idade", nome);
        printf("\n Sua idade e %d", idade);
        
    }else{
        printf(" %s voce e menor de idade", nome);
    }

   


    


}