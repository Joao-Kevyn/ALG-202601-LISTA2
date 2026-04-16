#include <stdio.h>

int main() {
  
  int n =3, fat = 1, i;
  
  for (i=1; i <3; i++){
      fat = fat *i;
  }
  
  printf("%d\n", fat);
  
  system("PAUSE");	
  return 0;
}
