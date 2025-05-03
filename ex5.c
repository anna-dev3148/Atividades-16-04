#include <stdio.h>
#include "igualdade.h"

int mensagem_ao_usuario(){
    int numDigitado;
    printf("Digite um numero: ");
    scanf("%d", &numDigitado);

    return numDigitado;
}

int main(){
    int num1, num2, num3;
    num1 = mensagem_ao_usuario();
    num2 = mensagem_ao_usuario();
    num3 = mensagem_ao_usuario();
    
    int numMaior = maior(num1,num2);
    maior(num1,num2);
    
    printf("\nMaior: %d \n", maior(numMaior,num3));

    return 0;
}
