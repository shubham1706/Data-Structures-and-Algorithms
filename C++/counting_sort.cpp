#include<stdio.h>
#include<iostream>

using namespace std;




void countingSort(int *arr, int *output_arr, int n, int k){

	// Creating an array for count and assigning all the values equals to 0
	int count_arr[k]={0};

	// Counting the values in given array and incrementing in the couting array
	for(int i = 0; i<n;i++){

		count_arr[arr[i]]+=1;
	}

	// Calculating Cummulative sum in count array
	for(int j=1; j<k; j++){

		count_arr[j] = count_arr[j] + count_arr[j-1];
	}


	// With the help of count array adding the values in sorted order in the output array
	for(int l = 0; l<n ;l++){

		output_arr[count_arr[arr[l]]-1] = arr[l];
		count_arr[arr[l]]-=1;
	}
}


int main(){

		//given array
		int arr[] = {11, 56, 64, 34, 25, 12, 22, 11, 90}; 

		// No of elements in the array
		int n = sizeof(arr)/sizeof(arr[0]);
		
		// Output array
		int arr2[n];

		// Range
		int k =100;

		countingSort(arr, arr2, n, k);
		
		//cout<<n;
		
		for(int i = 0;i<n;i++){

			cout<<arr2[i]<<" ";
		}
		
		
}