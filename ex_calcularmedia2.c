#include <stdio.h>

        int main(void) {
            float nota; 
            float soma= 0.0;
            int contador = 0;

            printf ("Digite as notas do aluno: (-5 para encerrar)");
            scanf ("%f", &nota);

            while (nota != -5) {
            soma = soma + nota;
            contador = contador + 1;
            
            printf ("Digite as notas do aluno:(-5 para encerrar)");
            scanf ("%f", &nota);
            }
              printf("Média das notas: %.2f\n", soma / contador);
            
    return 0; 
            
}





        