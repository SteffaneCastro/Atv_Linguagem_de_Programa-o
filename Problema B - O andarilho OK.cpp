#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int inteiro() {
	int N = 0;
	int N_correto = 0;
		while(N_correto != 1) {
			N_correto = scanf("%d", &N);
		}
		return N;
}
int impar(int i) {
	return i%2;
}
//inicío
int main() {
	int N = inteiro();
	N++;
	int passos[N];
		for(int i=0; i<N; i++) scanf("%d", & passos[i]);
	int dist = 0;
	int dist_max = -1;
		for (int i=0; i<N; i++) {
			if(impar(i)) {
				dist+=passos[i];
			} else { 
				dist-=passos[i];
			}
			if(dist>dist_max) dist_max = dist;
		}	
		printf("%d", dist_max);
		return 0;
}
