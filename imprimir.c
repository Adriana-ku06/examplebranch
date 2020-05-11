/* Programa: Suma y multiplicación de dos números (Solución 2) */
// este programa usa scanf para conseguir datos 
#include <conio.h>
#include <stdio.h>

int main()
{
    int number1, number2;

    printf( "\n   Introduzca el primer numero (entero): " );
    scanf( "%d", &number1 );

    printf( "\n   Introduzca el segundo numero (entero): " );
    scanf( "%d", &number2 );

    printf( "\n   La suma es: %d", number1 + number2 );
    printf( "\n\n   La multiplicaci%cn es: %d", 162, number1 * number2 );

    getch(); /* Pausa */

    return 0;
}
