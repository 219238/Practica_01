#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	//método de la burbuja
	int vect[25], aux = 0, cont = 0;
	srand(time(NULL));
	for (int z = 0; z < 25; z ++){
		vect[z]= rand();
	}
	
	for (int i = 0;  i < 25; i ++){
		for (int j = 0; j < (25 - i); j ++){
			cont ++;
			if (vect[j]>vect[j + 1]){
				aux = vect[j];
				vect[j] = vect[j + 1];
				vect[j + 1] = aux;
				cont ++;
			}
		}
	}
	for (int x = 0; x < 25; x ++){
		printf("[%i]", vect[x]);
	}
}
