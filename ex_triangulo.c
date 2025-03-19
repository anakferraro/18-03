#include <stdio.h>

int main(void) {
    int contador = 1;
    int lado1, lado2, lado3;

    while (contador != -1) {  
        printf("Digite o valor do lado 1: ");
        scanf("%d", &lado1);
        printf("Digite o valor do lado 2: ");
        scanf("%d", &lado2);
        printf("Digite o valor do lado 3: ");
        scanf("%d", &lado3);

        /*Verificacao se forma triangulo*/
        
        if (lado1 + lado2 > lado3) {
            if (lado1 + lado3 > lado2) {
                if (lado2 + lado3 > lado1) {
                    
                /*Verificao qual é o maior lado*/
                    
                    if (lado1 > lado2) {
                        if (lado1 > lado3) {
                           
                            /*lado1 maior*/
                           
                            if (lado1 * lado1 == lado2 * lado2 + lado3 * lado3) {
                                printf("O triângulo é retângulo. A hipotenusa é:%d", lado1);
                            } else {
                                printf("O triângulo não é retângulo.");
                            }
                        } else {

                            /*lado3 maior*/

                            if (lado3 * lado3 == lado1 * lado1 + lado2 * lado2) {
                                printf("O triângulo é retângulo. A hipotenusa é:%d", lado3);
                            } else {
                                printf("O triângulo não é retângulo.");
                            }
                        }
                    } else {
                        if (lado2 > lado3) {
                            
                            /*lado2 maior*/
                           
                            if (lado2 * lado2 == lado1 * lado1 + lado3 * lado3) {
                                printf("O triângulo é retângulo. A hipotenusa é:%d", lado2);
                            } else {
                                printf("O triângulo não é retângulo.");
                            }
                        } else {
                           
                            /*lado3 maior*/

                            if (lado3 * lado3 == lado1 * lado1 + lado2 * lado2) {
                                printf("O triângulo é retângulo. A hipotenusa é:%d", lado3);
                            } else {
                                printf("O triângulo não é retângulo.");
                            }
                        }
                    }
                } else {
                    printf("Os lados fornecidos não formam um triângulo válido.");
                }
            } else {
                printf("Os lados fornecidos não formam um triângulo válido.");
            }
        } else {
            printf("Os lados fornecidos não formam um triângulo válido.");
        }
printf(" Digite -1 para encerrar ou qualquer outro número para continuar: ");
        scanf("%d", &contador);
    }

    printf("Programa encerrado.");
    return 0;
}