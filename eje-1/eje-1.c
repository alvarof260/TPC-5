#include <stdio.h>

void reverse(int n);

int main(){
    int numeros;

    printf("Ingrese un numero: ");
    scanf("%d", &numeros);

    while (numeros != 0)
    {
        reverse(numeros);
        printf("Ingrese un numero: ");
        scanf("%d", &numeros);
    }
    
    return 0;
}

void reverse(int n)
{
    int reverse = 0;
    int cantidad_impares = 0;

    if (n != 0)
    {
        int digito = n % 10;
        if (digito % 2 != 0)
        {
            cantidad_impares++;
        }
        reverse = reverse * 10 + digito;
        n /= 10;
    }
    printf("La cantidad de digitos impares es: %d\n", cantidad_impares);
    printf("El numero invertido es: %d\n", reverse);
}
