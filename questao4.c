#include <stdio.h>


int main(){
  
  int num1, num2, gua1, gua2, resto, mdc, mmc;
  
  printf("Digite aqui o primeiro numero para o calculo do MMC: ");
  scanf("%d", &num1);
  
  printf("Digite aqui o segundo numero para o calculo do MMC: ");
  scanf("%d", &num2);
  
  // as variaveis "gua1" e "gua2" vao servir para armazenar o valor original 
  
  gua1 = num1;
  gua2 = num2; 
  
  // Calculando o MDC usando Euclides 
  
  while (gua2 != 0){
        resto = gua1 % gua2;
        gua1 = gua2;
        gua2 = resto;
  
  }
  
  mdc = gua1;
  
  // MMc 
  
  mmc = (num1 * num2) / mdc; 
  
  printf("o MMC de %d e de %d e igual a: %d\n", num1, num2, mmc);
  
  system("pause");
  return 0;
}
