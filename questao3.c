#include <stdio.h>

int main() {
  
  char letra; 
  
  printf("Digite aqui uma letra: ");
  scanf("%c", &letra);
  
  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
     printf("A letra digitada e uma vogal.\n");
  }
  else {
     printf("A letra digita e uma concoante.\n");
  }
  
  
  system("PAUSE");	
  return 0;
}
