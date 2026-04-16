#include <stdio.h>


int main(){
    
    int seg, hora, minutos, restoSeg; 
       
    printf("Digite aqui o numero de segundos que deseja: ");
    scanf("%d", &seg);
    
    hora = seg / 3600;
    minutos = (seg % 3600) / 60;
    restoSeg = seg % 60;
    
    printf("A quantidade de segundos digitados corresponde a: Horas: %d\n, Minutos: %d\n, Segundos: %d\n", hora, minutos, restoSeg);
    
  
    system("pause");	
    return 0;
}
