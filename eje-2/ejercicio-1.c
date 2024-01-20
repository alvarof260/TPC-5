#include <stdio.h>
#include <ctype.h>

void mostrarPrimerCaracter(char caracter);
int esVocal(char caracter);
void cambioLetra(char caracter);

void main()
{
    char frase;
    int esPrimera = 1;
    int cantidad_vocales = 0;
    int cantidad_digito = 0;

    printf("Ingrese una frase: ");
    scanf("%c", &frase);
    while (frase != '.')
    {

        while (frase != ' ' && frase != '.')
        {
            if (esPrimera)
            {
                mostrarPrimerCaracter(frase);
            }
            else
            {
                cambioLetra(frase);
            }
            if (esVocal(frase))
            {
                cantidad_vocales++;
            }
            if (isdigit(frase))
            {
                cantidad_digito++;
            }
            scanf("%c", &frase);
            esPrimera = 0;
        }
        printf(" ");
        esPrimera = 1;
        if (frase != '.')
        {
            scanf("%c", &frase);
        }
    }
    printf("\n");
    printf("la cantidad de vocales es: %d\n", cantidad_vocales);
    printf("la cantidad de digitos es: %d\n", cantidad_digito);
}

void mostrarPrimerCaracter(char caracter)
{
    if (esVocal(caracter))
    {
        cambioLetra(caracter);
    }
    else
    {
        if (islower(caracter))
        {
            printf("%c", toupper(caracter));
        }
        else
        {
            printf("%c", tolower(caracter));
        }
    }
}

int esVocal(char caracter)
{
    caracter = tolower(caracter);
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void cambioLetra(char caracter)
{
    caracter = tolower(caracter);
    if (caracter == 'a')
    {
        printf("@");
    }
    else if (caracter == 'o')
    {
        printf("#");
    } else {
        printf("%c", caracter);
    }
}
