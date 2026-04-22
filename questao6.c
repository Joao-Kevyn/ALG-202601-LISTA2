#include <stdio.h>

int main(){
  
  int soma = 0, i;
  
  for (i = 0; i<=6; i++){
      soma += 4 + i;
  }
  
  printf("A soma de pecas 4 do domino e: %d\n", soma);
  
  system("PAUSE");	
  return 0;
}
