#include <stdio.h>
#include <math.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
float potencia(float a, float b);
double resto(float a, float b);

int main()
{
    float num1, num2;
    double operacion;
    char operador;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    printf("Ingrese el operador: ");
    scanf(" %c", &operador);

    switch (operador)
    {
        case '+':
            operacion = suma(num1, num2);
            break;
        case '-':
            operacion = resta(num1, num2);
            break;
        case '*':
            operacion = multiplicacion(num1, num2);
            break;
        case '/':
            operacion = division(num1, num2);
            break;
        case '^':
            operacion = potencia(num1, num2);
            break;
        case '%':
            operacion = resto(num1, num2);
            break;
        default:
            printf("Operador invalido\n");
            break;            
    }

    printf("El resultado de la operacion es: %.2f\n", operacion);
}

float suma(float a, float b)
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}

float multiplicacion(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

float potencia(float a, float b)
{
    return pow(a, b);
}

double resto(float a, float b)
{
    return fmod(a, b);
}