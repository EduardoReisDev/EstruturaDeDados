#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (){
	int TAM=7, x=0, y=0; 
	string vetor[7],aux;
	
	for (x = 0; x < TAM; x++){
		cout << "Entre com um inteiro para o vetor: ";
		getline(cin, vetor[x]);
	}
	
	system("cls");


	for (x = 0; x < TAM; x++){
		for(y = x + 1; y < TAM; y++){
			if (vetor[x] > vetor[y]){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
	
	cout << "Elementos ordenados (decresente): \n";
	for( x = 0; x < TAM; x++){
		cout << "O numero na posicao "<<x<<" eh "<<vetor[x]<<"\n";
	}
	system("pause");
}
