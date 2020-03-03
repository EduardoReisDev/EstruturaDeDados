#include <stdio.h>
#include <iostream>

using namespace std;

int i, p;

int merge(int arr[50], int l, int m, int h)
{
    int arr1[p], arr2[p];
    int n1, n2, i, j, k;
    n1 = m - l + 1;
    n2 = h - m;

    for(i = 0; i < n1; i++)
        arr1[i] = arr[l + i];

    for(j = 0; j < n2; j++)
        arr2[j] = arr[m + j + 1];

    arr1[i] = 9999;
    arr2[j] = 9999;

    i = 0;
    j = 0;
//laco que realiza a fusao das partes do vetor
    for(k = l; k <= h; k++)
    {
        if(arr1[i] <= arr2[j])
            arr[k] = arr1[i++];
        else
            arr[k] = arr2[j++];
    }

    return 0;
}
//funcao que realiza a divisao do vetor
int merge_sort(int arr[],int low,int high)
{

    int mid; //variavel que guarda a metade do vetor

    if(low < high) 
    {
        mid = (low + high) / 2;

        // Dividir e conquistar
        merge_sort(arr, low, mid); //inicio ate o meio

        merge_sort(arr, mid + 1, high); //meio mais um ate o fim

        // Combinar
        merge(arr, low, mid, high); //vetor, menor valor, meio, maior valor
    }

    return 0;
}

int main()
{
	
	int p, arr[50];
	
	cout << "\a""Digite a quantidade de numeros: (Min: 3 | Max: 50)";
	cin >> p;
	cin.ignore();
	
	if( p < 3 || p > 50){
		cout << "\a""* * * ----!! VOCE NAO OBEDECEU AS REGRAS !!---- * * *"<<endl<<endl<<endl;
		main();
	}
	
	else {
		for ( i = 0; i < p; i++){
			cout << "\a""Digite >> ";
			cin >> arr[i];
		}
	}
    
    cout << "Vetor desordenado: ";
    
    for(i = 0; i < p; i++){
    	cout<<endl<<arr[i];
	}
	
	merge_sort(arr, 0, p); //funcao de ordenacao: vetor, valores minimo e maximo

    cout << "\n\nVetor ordenado decrescente...: ";

    for(i = p; i >= 1; i--){
        cout <<endl <<arr[i];
    }

    return 0;
}
