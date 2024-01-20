### PSEUDOCODIGO

    ```PSEUDOCODE
    ENTRADA: frase: cc con MF = .
    SALIDA: frase: cc
    VAR.AUX:
    CONSTANTES:

    A1_ LEER(frase)
    A2_ ANALIZAR_FRASE
    A3_ ESCRIBIR(frase)


    A2_ ANALIZAR_FRASE
        MIENTRAS(frase <> MF)
            MIENTRAS(frase <> - AND frase <> MF)
                SI(primeraLetra) ENTONCES
                    mostraPrimerCaracter(frase)
                FIN_SI

                SI(esVocal(frase)) ENTONCES
                    cantidad_vocal <-- cantidad_vocal + 1
                FIN_SI

                SI (esDigito(frase)) ENTONCES
                    cantidad_digito <-- cantidad_digito + 1
                FIN_SI

                LEER(frase)
                primeraLetra <-- 0
            FIN_MIENTRAS
            primera_letra <-- 1
            SI(frase <> MF) ENTONCES
                LEER(frase)
            FIN_SI
        FIN_MIENTRAS


    PROCEDIMIENTO mostrarPrimerCaracter (caracter) caracter
            SI(esLetra(caracter)) ENTONCES

                SI(caracter = a OR caracter = o) ENTONCES

                    SI(caracter = a) ENTONCES
                        ESCRIBIR(@)
                    SINO
                        ESCRIBIR(#)
                    FIN_SI
                SINO
                    SI(esMinuscula(caracter)) ENTONCES
                        ESCRIBIR(hacerMayuscula(caracter))
                    SINO
                        ESCRIBIR(hacerMinuscula(caracter))
                    FIN_SI
                FIN_SI
            SINO
                ESCRIBIR(caracter)
            FIN_SI
    FIN_PROCEDIMIENTO

    FUNCION esVocal(caracter) caracter -> entero+ 
        flag 
        SI(caracter = a OR caracter = e OR caracter = i OR caracter = o OR caracter = u OR caracter = A OR caracter = E OR caracter = I OR caracter = O OR caracter = U) ENTONCES
            flag <-- 1
        SINO
            flag <-- 0
        FIN_SI
        retorna flag
    FIN_FUNCION