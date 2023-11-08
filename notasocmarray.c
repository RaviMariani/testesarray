#include <stdio.h>
#include <stdlib.h>
int main(){
    
    float notas[3];
    int i;
 
 for (i = 0; i < 3; i++){
    printf("Digite a %i nota:", i + 1);
    scanf("%f",&notas[i]);
 }
    printf("\nExibindo as notas: \n");
    
    for(i = 0; i < 3; i++) {
        printf("%i nota: %.2f\n",i + 1,notas[i]);
    }
return 0;
}