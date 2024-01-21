### PSEUDOCODIGO

    ```PSEUDOCODE
    ENTRADA: num1, num2: real ; signo_arimetica: caracter {+,-,/,*,%,^}
    SALIDA: operacion: real
    VAR.AUX:
    CONSTANTES

    A1_ LEER(num1, num2, signo_arimetica)
    A2_ CALCULADORA
    A3_ ESCRIBIR(operacion)
    A4_ PARAR

    A2_ CALCULADORA
        SEGUN(signo_arimetica)
            + : operacion <-- suma(num1,num2)
            - : operacion <-- resta(num1,num2)
            / : operacion <-- division(num1,num2)
            * : operacion <-- producto(num1,num2)
            ^ : operacion <-- potencia(num1,num2)
            % : operacion <-- resto(num1,num2)
        FIN_SEGUN

    FUNCION suma(a,b) real, real -> real
        resultado
        resultado <-- a + b
        retorna resultado
    FIN_FUNCION

    FUNCION resta(a,b) real, real -> real
        resultado
        resultado <-- a - b
        retorna resultado
    FIN_FUNCION
    
    FUNCION producto(a,b) real, real -> real
        resultado
        resultado <-- a * b
        retorna resultado
    FIN_FUNCION
    
    FUNCION division(a,b) real, real -> entero
        resultado
        resultado <-- DIV(a,b)
        retorna resultado
    FIN_FUNCION

    FUNCION resto(a,b) real, real -> entero
        resultado
        resultado <-- MOD(a,b)
        retorna resultado
    FIN_FUNCION

    FUNCION potencia(a,b) real, real -> real
        resultado
        resultado <-- a**b
        retorna resultado
    FIN_FUNCION
    

    ```
