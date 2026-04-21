#include <stdio.h>


int main(){
    
    int num1, num2, num3;
    float media;
    
    printf("Digite aqui seu primeiro numero interiro: ");
    scanf("%d", &num1);
    
    printf("Digite aqui seu segundo numero inteiro: " );
    scanf("%d", &num2);
    
    printf("Digite aqui seu terceiro numero inteiro: ");
    scanf("%d", &num3);
    
    media = (num1 + num2 + num3) / 3.0;
    
    printf("Sua media e: %.2f\n", media); 
  
  
  system("PAUSE");	
  return 0;
}
