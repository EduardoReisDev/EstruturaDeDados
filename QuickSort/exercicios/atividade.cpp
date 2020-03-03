#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

void Quick(string vetor[30], int inicio, int fim);
void QuickDesc(string vetor[30], int inicio, int fim);

int main(){
	
	int p, i;
	string vetor[30], c;
	
	cout << "\a""Digite a quantidade de cadastros: ";
	cin >> p;
	cin.ignore();
	
	if( p < 3 || p > 30){
		cout << "\a""* * * ----!! VOCE NAO OBEDECEU AS REGRAS !!---- * * *"<<endl;
	}
	
	else {
		for ( i = 0; i < p; i++){
			cout << "\a""Digite >> ";
			getline (cin, vetor[i]);
			
		}
	}
    
   cout << "Vetor desordenado:\n";
   for(i = 0; i < p; i++){
      cout << vetor[i] << endl;
   }
   cout << "\n";   
    
   Quick(vetor, 0, p); //recursividade
    
   cout << "Vetor ordenado crescente:\n";
   for(i = 0; i < p + 1; i++){
      cout << vetor[i] <<endl;
   }
   cout << "\n";
   
   QuickDesc(vetor,0,p); //ordem descrescente
   
   cout << "Vetor ordenado descrescente:\n";
   for(i = 0; i < p; i++){
      cout << vetor[i] << endl;
   }      
}
 
void Quick( string vetor[30], int inicio, int fim){
    
   int i, j, meio;
   string pivo, aux;
    
   i = inicio;
   j = fim;
    
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
    
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
       
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
    
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   
 
}

void QuickDesc(string vetor[30], int inicio, int fim){
    
   int i, j, meio;
	string pivo, aux;
	
	    
   i = inicio;
   j = fim;
    
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
    
   do{
      while (vetor[i] > pivo) i = i + 1;
      while (vetor[j] < pivo) j = j - 1;
       
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
    
   if(inicio < j) QuickDesc(vetor, inicio, j);
   if(i < fim) QuickDesc(vetor, i, fim);   
}
