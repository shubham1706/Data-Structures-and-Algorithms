#include <stdio.h>
#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high){

	//Making the element at the highest index the pivot element
	int pivot = arr[high];

	//Index of the smallest element
	int i = (low-1);

	for(int j=low; j<=high-1; j++){
		
		//If current element is less than or equal to the pivot element
		if(arr[j]<=pivot){

			i++; //Increasing the index
			swap(&arr[i], &arr[j]); //swapping the current element with the element at the loop
		}

	}

	swap(&arr[i+1], &arr[high]); //swapping the pivot element to it's right place
	return i+1;
}

void quickSort(int arr[], int low, int high){

if(low<high){

	//Getting the index of the pivot element ie. pi
	int pi = partition(arr, low, high);

	quickSort(arr, (pi+1), high);
	quickSort(arr, low, (pi-1));
	}
}

int main(){

	int arr[] = {10, 80, 30, 90, 40, 50, 70};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<"\n";
	}





}