#include <stdio.h>


int main() {
    
    float MB, Mbps, minuto; 
    
    printf("Digite aqui o tamanho do arquivo em MB: ");
    scanf("%f", &MB);
    
    printf("Digite aqui a velocidade em Mbps: ");
    scanf("%f", &Mbps);
    
    minuto = (MB * 8 / Mbps) / 60;
    
    printf("O tempo estimado para dowload em minutos e: %.2f\n", minuto);
  
  system("PAUSE");	
  return 0;
}
