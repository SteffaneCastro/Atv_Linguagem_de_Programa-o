#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int votos[100];
    char A=0, B=0, C=0, D=0, vnulos=0, vbrancos=0;
    int i;
    int qtdEleitores = 0, restEleitores = 0;
    printf("Número de eleitores que vao votar: ");
    scanf("%i", &qtdEleitores);
    restEleitores = qtdEleitores;
    system("CLS");
    for (i=0; i<qtdEleitores; i++)
    {
    	printf("Faltam %i eleitores para votor\n\n", restEleitores);
        printf("Escolha Seu Candidato => A=1, B=2, C=3 ou D=4:\n\n");
        scanf("%d", &votos[i]);
 
        if((votos[i]) == 1){
            A++;
        }else if((votos[i]) == 2){
            B++;
        }else if((votos[i]) == 3){
            C++;
    	}else if((votos[i]) == 4){
            D++;
        }else if((votos[i]) == vnulos){
            vnulos++;
        }else {
        	vbrancos++;
		}
        restEleitores--;
        system("CLS");
    }
 
    printf("Numero de Votos do Candidato A: %i\n", A);
    printf("Numero de Votos do Candidato B: %i\n", B);
    printf("Numero de Votos do Candidato C: %i\n", C);
    printf("Numero de Votos do Candidato D: %i\n", D);
    printf("Numero de Votos Nulos: %i\n", vnulos);
    printf("Numero de Votos Brancos: %i\n", vbrancos);
 
    system("PAUSE");
    return 0;
}
