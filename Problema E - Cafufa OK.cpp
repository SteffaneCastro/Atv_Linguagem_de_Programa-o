//bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int fim,num1,num2,i,ultDig,cont=0; //variaveis 
	do{
		printf("Quantos números? ");
		scanf("%i",&fim);
	}while((fim<0)||(fim>1000));
	do{
		if(cont>0)
			printf("Digite um valor exceto 0 \n");
		do{
			printf("Digite o 1º valor: ");
			scanf("%i",&num1);
		}while((num1<0)||(num1>9));
		do{
			printf("Digite o 2º valor: ");
			scanf("%i",&num2);
		}while((num2<0)||(num2>9));
		system("cls");
		if((fim==0)&&(num1==0)&&(num2==0)){
			printf("Fim do programa!");
			return 0;
		}
		cont++;
	}while((num1==0)||(num2==0));
	for(i=1;i<=fim;i++){
		if(i%num1==0)
			printf(" Cafufa ");
		else{
			if(i%num2==0)
				printf(" Cafufa ");
			else{
				ultDig=i/10,ultDig=i*10,ultDig=i-ultDig;
				if((ultDig==num1)||(ultDig==num2))
					printf(" Cafufa ");
				else
					printf(" %i ",i);
			}
		}
		if(i!=fim)
			printf(",");
		else
			printf(".\n");
	}
	system("Pause");
	return 0;
}
