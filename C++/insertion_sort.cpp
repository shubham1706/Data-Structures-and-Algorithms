#include<stdio.h>
#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n){

	int i, j, key;  //declaring the counter, current and key variable

	for(i=1; i<n; i++){

		key = arr[i]; // assigning the key variable a value.
		j= i-1;

		// this loop is for checking if the current value is greater than the key or not.
		while(j>=0 && arr[j]>key){
			arr[j+1]= arr[j]; //exchanging the next value with the previous one
			j = j-1;
		}
		arr[j+1] = key; //assigning the value at the current index as the key value.
	}
}

int main(){

	int arr[] = { 11, 10, 9, 13, 19, 5, 6, 2 };
	int n = sizeof(arr)/sizeof(arr[0]);

	insertion_sort(arr, n);

	for(int i = 0; i<8; i++){
		cout<<arr[i]<<"\n";
	}

	
}