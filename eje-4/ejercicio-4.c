#include <stdio.h>
#include <ctype.h>

#define PRECIO_INICIAL 12800
#define PRECIO_PRIMARIO 15000
#define PRECIO_SECUNDARIO 18500
#define EDUCACION_FISICA 20000
#define INGLES 19500
#define PROGRAMACION 22000
#define OTRO 15000
#define PORCENTAJE_1COUTAS 0.10
#define PORCENTAJE_2COUTAS 0.15
#define PORCENTAJE_3COUTAS 0.25

float calcularNivel(char nivel, char carrera);
float calcularMetodoDePago(char metodoDePago, float valor_matricula);

void main()
{
    char nivel, carrera, metodoDePago;
    float valor_matricula;

    printf("Ingrese el nivel de estudios:\n");
    printf("a) nivel inicial\n");
    printf("b) nivel primario\n");
    printf("c) nivel secundario\n");
    printf("d) nivel superior\n");
    scanf("%c", &nivel);
    printf("Ingrese la carrera: ");
    printf("a) educacion fisica\n");
    printf("b) ingles\n");
    printf("c) programacion\n");
    printf("d) otro\n");
    printf("e) no corresponde\n");
    scanf(" %c", &carrera);
    printf("Ingrese el metodo de pago: ");
    printf("a) 1 couta\n");
    printf("b) 2 coutas\n");
    printf("c) 3 coutas\n");
    scanf(" %c", &metodoDePago);

    valor_matricula = calcularNivel(nivel, carrera);
    valor_matricula = calcularMetodoDePago(metodoDePago, valor_matricula);

    printf("El valor de la matricula es: %.2f", valor_matricula);
}

float calcularNivel(char nivel, char carrera)
{
    int flag = 0;
    float valor_matricula;
    nivel = tolower(nivel);
    switch (nivel)
    {
    case 'a':
        valor_matricula = PRECIO_INICIAL;
        break;
    case 'b':
        valor_matricula = PRECIO_PRIMARIO;
        break;
    case 'c':
        valor_matricula = PRECIO_SECUNDARIO;
        break;
    case 'd':
        flag = 1;
        break;
    }

    if (flag == 1)
    {
        carrera = tolower(carrera);
        switch (carrera)
        {
        case 'a':
            valor_matricula = EDUCACION_FISICA;
            break;
        case 'b':
            valor_matricula = INGLES;
            break;
        case 'c':
            valor_matricula = PROGRAMACION;
            break;
        case 'd':
            valor_matricula = OTRO;
            break;
        default:
            printf("No corresponde");
            break;
        }
    }
}

float calcularMetodoDePago(char metodoDePago, float valor_matricula)
{
    float valor_a_pagar;
    metodoDePago = tolower(metodoDePago);
    switch (metodoDePago)
    {
    case 'a':
        valor_a_pagar = valor_matricula - (valor_matricula * PORCENTAJE_1COUTAS);
        break;
    case 'b':
        valor_a_pagar = valor_matricula + (valor_matricula * PORCENTAJE_2COUTAS);
        break;
    case 'c':
        valor_a_pagar = valor_matricula + (valor_matricula * PORCENTAJE_3COUTAS);
        break;
    default:
        printf("No corresponde");
        break;
    }
    return valor_a_pagar;
}