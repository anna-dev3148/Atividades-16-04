#include <stdio.h>
#include "igualdade.h"


int main (){
    int num1;
    int num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    if(num1 == num2){
        printf("\nIguais: %d \n", igual(num1,num2));
    } else {
    printf("\nMaior: %d ", maior(num1,num2));
    printf("\nMenor: %d \n", menor(num1,num2));
    }
    
    return 0;
}
