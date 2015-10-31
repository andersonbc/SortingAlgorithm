#include<iostream>

using namespace std;

void insertionSort(int array[], int n){	
	int aux, i;	
	for(int j=1; j<n; j++){
		aux= array[j];
		i = j-1;
		while(i>=0 && array[i] > aux){
			array[i+1] = array[i];
			i = i-1;
		}
		
		array[i+1] = aux;
	}	
}

int main(){
	
	int array[] = {10, 5, 11, 3, 4};
	int n = (sizeof(array)/sizeof(*array));
	
	insertionSort(array, n);
	
	
	for(int i = 0; i<n; i++){
		cout << array[i] << endl;
	}
	return 0;
}
