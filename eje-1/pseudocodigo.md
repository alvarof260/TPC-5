### PSEUDOCODIGO

    ```PSEUDOCODE
    ENTRADA: numeros: entero+ ;
    SALIDA: numeroInverso: entero+;
    VAR.AUX: 
    CONSTANTES:

    A1_ LEER(numeros)
    A2_ MOSTRARNUMEROS
    A3_ PARAR

    A2_ MIENTRAS (numeros <> 0)
            ESCRIBIR()
            LEER(numeros)
        FIN_MIENTRAS



    PROCEDIMIENTO invertir_numero (num) entero+ 
        digito, reverse, cantidad_impares: entero+;

        reverse <-- 0
        cantidad_impares <-- 0

        MIENTRAS(num != 0)
            digito = MOD(num, 10)
            SI (MOD(digito, 2) = 0) ENTONCES
                cantidad_impares <-- cantidad_impares +1
            FIN_SI
            reverse <-- reverse * 10 + digito
            num <-- DIV(num, 10)
        FIN_MIENTRAS
        ESCRIBIR(cantidad_impares)
        ESCRIBIR(reverse)
    FIN_PROCEDIMIENTO
    ```
