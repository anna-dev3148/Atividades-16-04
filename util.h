#include <stdio.h>

double diametro(){
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    return raio * 2;
}

double circunferencia(){
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    return 2 * 3.14 * raio;
}

double area(){
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    return 3.14 * raio * raio;  
}
