#include <stdio.h>
#include "util.h"

int main(){

    double informadiametro = diametro();
    double informacircunferencia = circunferencia();
    double informaarea =  area();

    printf("O diâmetro é: %lf\n", informadiametro);
    printf("A circunferência é: %lf\n", informacircunferencia);
    printf("A área é: %lf\n", informaarea);

    return 0;
}
