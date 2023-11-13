/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    char nomes[5][50];  
    int idades[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    system("cls || clear");
        
    printf("\nListagem de nomes e idades:\n");
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d - Nome: %s, Idade: %d\n", i + 1, nomes[i], idades[i]);
    }

    return 0;
}
