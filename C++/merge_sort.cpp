#include<stdio.h>
#include<iostream>

using namespace std;


void merge(int arr[], int l, int m, int r){

	int i, j, k; // defining indexes

	int n1 = (m-l+1);           // size of array 1
	int n2 = (r-m);         // size of array 2

	int arr1[n1], arr2[n2];   // declaring the two arrays

	i=0;
	j=0;
	k=l;


	// Adding the elements to the first array
	for(int i = 0; i<n1; i++){

		arr1[i] = arr[l+i];
	} 

	// Adding the elements to the second array
	for(int j = 0; j<n2; j++){

		arr2[j] = arr[m+1+j];

	}


	while(i < n1 && j < n2){

		if(arr1[i]<arr2[j]){

			arr[k] = arr1[i];
			i++;
		}
		else{

			arr[k] = arr2[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		arr[k] = arr1[i];
		i++;
		k++;
	}

	while(j<n2){
		arr[k] = arr2[j];
		j++;
		k++;
	}

}

void mergesort(int arr[], int l, int r){

	if(l<r){

		int m = l+(r-l)/2;                // m is the middle element
		mergesort(arr, l, m);     // 1st array recursively calling
		mergesort(arr, (m+1), r); // 2nd array recursively calling
		merge(arr, l, m, r);      // merging the arrays

	}
}


int main(){

	int arr[] = { 12, 8, 7, 2, 78, 20, 24};

	int size = sizeof(arr)/ sizeof(arr[0]);

	mergesort(arr, 0, (size-1));

	for(int i = 0; i < size; i++){

		cout<<arr[i]<<"\n";
	}
}
