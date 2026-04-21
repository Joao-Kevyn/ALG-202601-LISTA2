#include <stdio.h>


int main(){
  
  int num1, num2, num3, maior, menor, medio;
  
  printf("Digite o primeiro numero aqui: ");
  scanf("%d", & num1);
  
  printf("Digite o segundo numero aqui: ");
  scanf("%d", & num2);
  
  printf("Digite o terceiro numero aqui: ");
  scanf("%d", & num3);
  
  if (num1 > num2 && num1 > num3){
     maior = num1;
  }
  else if (num2 > num1 && num2 > num3){
     maior = num2;
  }
  else{
     maior = num3;
  }
  
  if (num1 < num2 && num1 < num3){
     menor = num1;
  }
  else if (num2 < num1 && num2 < num3){
     menor = num2;
  }
  else{
     menor = num3;     
  }
  
  medio = (num1 + num2 + num3) - maior - menor; 
  
  printf("Ordem crescente: %d %d %d\n ", maior, medio,menor);
  
  system("PAUSE");	
  return 0;
}
