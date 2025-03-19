#include <stdio.h>
int main(void) {
    int contador = 1;
    int fim = 3;
    
        float total = 0.0;
        float nota;
        float media;
        
    
    
    while( contador <= 3) {
        printf ("Digite a sua nota %d:", contador);
        scanf ("%f", &nota);
        
       total = total + nota;
       
       contador = contador + 1;
       
    }
    media = total/3;
    printf ("Sua média é %.2f", media);
    
    return 0;
}