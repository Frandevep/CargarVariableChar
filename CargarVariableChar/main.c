#include <stdio.h>


int main()
{
    char letra;//Creamos la variable char que nos permite ingresar unicamente UN caracter
    printf("Ingrese su letra:");
    scanf("%c",&letra);// Ingreso del caracter seleccionado, usamos & para acceder a su direccion de memoria
    printf("Su letra es: %c",letra); //Imprimimos el caracter

    return 0;
}
