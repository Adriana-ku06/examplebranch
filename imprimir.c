/* Programa: Suma y multiplicación de dos números (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
    int n1, n2;

    printf( "\n   Introduzca el primer numero (entero): " );
    scanf( "%d", &n1 );

    printf( "\n   Introduzca el segundo numero (entero): " );
    scanf( "%d", &n2 );

    printf( "\n   La suma es: %d", n1 + n2 );
    printf( "\n\n   La multiplicaci%cn es: %d", 162, n1 * n2 );

    getch(); /* Pausa */

    return 0;
}
