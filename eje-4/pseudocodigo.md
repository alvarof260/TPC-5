### PSEUDOCODIGO

    ```PSEUDOCODE
    ENTRADA: nivel: caracter { a: nivel inicial, b: nivel primario, c: nivel secundario, d: nivel superior} ; carrera: {a: educacion fisica, b: ingles, c: programacion, d: otro profesorado, e: ninguna }, tipo_pago: caracter {a: 2 partes, b: 3 partes, c: un solo pago} 
    SALIDA: valor_matricula: real+
    VAR.AUX:
    CONSTANTES: PRECIO_INICIAL 12800
                PRECIO_PRIMARIO 15000
                PRECIO_SECUNDARIO 18500
                EDUCACION_FISICA 20000
                INGLES 19500
                PROGRAMACION 22000
                OTRO 15000
    
    A1_ LEER(nivel, carrera, pago)
    A2_ NIVEL
    A3_ FORMAS_DE_PAGO
    A4_ ESCRIBIR(valor_matricula)
    A5_ PARAR

    A2_ NIVEL
        valor_matricula <-- calcularNivel(nivel, carrera)
    A3_ FORMAS_DE_PAGO
        valor_matricula <- calcularMetodoPago(tipo_pago, valor_matricula)


    FUNCION calcularNivel(nivel, carrera) caracter, caracter -> real+
        flag <-- 0
        valor_matricula
        nivel = hacerMinuscula(nivel)
        SEGUN nivel
            a : valor_matricula <-- PRECIO_INICIAL
            b : valor_matricula <-- PRECIO_PRIMARIO
            c : valor_matricula <-- PRECIO_SECUNDARIO
            d : flag <-- 1
        FIN_SEGUN
        
        SI(flag = 1) ENTONCES
            carrera = hacerMinuscula(carrera)
            SEGUN carrera
                a: valor_matricula <-- EDUCACION_FISICA
                b: valor_matricula <-- INGLES
                c: valor_matricula <-- PROGRAMACION
                d: valor_matricula <-- OTRO
            FIN_SEGUN
        FIN_SI
        retorna valor_matricula
    FIN_FUNCION

    FUNCION calcularMetodoPago (tipo_pago, valor_matricula) real+ -> real+
        SEGUN tipo_pago
            a : valor_matricula <-- valor_matricula + (valor_matricula * PORCENTAJE_2)
            b : valor_matricula <-- valor_matricula + (valor_matricula * PORCENTAJE_3)
            c : valor_matricula <-- valor_matricula <-- valor_matricula - (valor_matricula * PORCENTAJE_1)
        FIN_SEGUN
        retorna valor_matricula
    FIN_FUNCION
    ```