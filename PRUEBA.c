#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    // Se designan las variables a utilizar
    int num = 0;
    char cadena[63];

    // Se puide al ususario hasta que ingrese un numero entero positivo
    do
    {
        printf("Ingresa un numero entero positivo:\n");
        scanf("%llu", &num);
    } while (num >= 0);

    //Se ocupa itoa para transformar el numero entero a hexadecimal
    ltoa(num, cadena, 16);

    //Se imprime al usuario el resultado final
    printf("El numero en hexadecimal es: %s\n", cadena);

    return 0;
}