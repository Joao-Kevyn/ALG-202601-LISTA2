#include <stdio.h>

int main() {
    

  float peso, altura, imc;
  
  printf("Digite aqui seu peso: ");
  scanf("%f", &peso);
  
  printf("Digite aqui sua altura:");
  scanf("%f", &altura);
  
  imc = peso / (altura * altura);
  
  printf("Seu IMC e: %.2f\n", imc);
  
  system("PAUSE");	
  return 0;
}
