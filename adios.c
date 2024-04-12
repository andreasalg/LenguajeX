// calcular el par de un numero

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1, cuadrado;

    printf("Ingrese un numero \n");
    scanf("%i" , &num1);

    // Escanear si es par o no

    if(num1%2 == 0){
        cuadrado = pow(num1, 2);
        printf("El cuadrado de %i es %i", num1, cuadrado);
    }else{
        printf("El numero %i no es par.", num1);
    }

    return 0;   
}