#include <stdio.h>

int recebenums(){
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("O número digitado foi: [%d]\n\n", num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("O número digitado foi: [%d]\n\n", num2);

    return num1 + num2;
}

int recebesoma(){
    int x, y;
    return x + y;
}

int main(){
    int numsrecebido = recebenums();
    
    printf("A soma dos dois número digitado foi: %d\n", numsrecebido);
    printf("Soma efetuada com sucesso! %d\n", recebesoma());
    
    return 0;
}
