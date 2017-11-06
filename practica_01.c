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
	
	int vect[5] = {8,3,9,2,6};
 +	
 +	int aux;
 +	
 +	for (int i = 0; i < 5; i ++){
 +		for (int j = 0; j < 5; j ++){
 +			if (vect[j] > vect[i]){
 +				aux = vect[i];
 +				vect[i] = vect[j];
 +				vect[j] = aux;
 +			}
 +		
 +		}
 +	}
 +	printf("VECTOR ORDENADO \n");
 +	for (int i = 0; i < 5; i ++){
 +		printf("[%i]", vect[i]);
 +	}
}
