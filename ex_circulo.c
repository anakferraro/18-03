#include <stdio.h> 

int main(void) {
    float raio, diametro, circunferencia, area;
    float pi = 3.14;

         puts ("Digite o valor do raio do circulo ou (0 para sair):");
         scanf ("%f", &raio);

        while (raio != 0) {
       
            diametro = 2 * raio;
            circunferencia = 2 * pi * raio;
            area = pi * raio * raio;

            printf("Raio:%.2f ", raio);
            printf ("Diâmetro:%.2f ", diametro);
            printf ("Circunferência:%.2f ", circunferencia);
            printf ("Área:%.2f ", area);

            puts ("Digite o valor do raio do círculo (ou 0 para sair): ");
            scanf ("%f", &raio);
        }
        puts ("Programa encerrado. Valor de raio 0 foi inserido.");
    
        return 0;
}