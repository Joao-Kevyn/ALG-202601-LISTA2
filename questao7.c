#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero, tentativa, tentativas;
    
    tentativas = 0;
    // rand gera numeros aleatorios e a linha toda gera um numero aleatorio dentro de 0 100
    numero = rand() % 101; 
    
    printf("Tente adivinhar o numero de 0 a 100\n");
    
    // aqui se lê o primeiro chute   
    scanf("%d", &tentativa);
    
    while (tentativa != numero) {
        
        // conta as tentativas erradas 
        tentativas = tentativas + 1;
        
        if (tentativa > numero) {
            printf("O numero sorteado e MENOR\n");
        }
        else {
            printf("O numero sorteado e MAIOR\n");
        }
        
        scanf("%d", &tentativa);
    }
    
    tentativas = tentativas + 1;
    
    printf("Voce acertou!\n");
    printf("O numero de tentativas foi: %d\n", tentativas);
    
    system("PAUSE");
    return 0;
}
