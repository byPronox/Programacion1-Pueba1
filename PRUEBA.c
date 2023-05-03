#include <stdio.h>
#include <stdlib.h>
 
int main()
{

    int num = 0;
    char cadena[63];

    printf("Ingresa un numero decimal:\n");
    scanf("%llu", &num);

    ltoa(num, cadena, 16);
    printf("El numero en hexadecimal es: %s\n", cadena);
    return 0;
}