#include<iostream>

using namespace std;

void radixSort(int*, int);
void countingSort(int*, int*, int, int);


void radixSort(int *arr, int n){

	int output_arr[n]={0}, Max;

	Max = arr[0];
	for(int i = 1; i<n; i++){

		if(arr[i]> Max){
			Max = arr[i];
		}
	}

	for(int j = 1; Max/j>0; j=j*10){

		countingSort(arr, output_arr, n, j);
	}


	for(int k=0; k<n; k++){

		cout<<output_arr[k]<< " ";
	}

}

void countingSort(int *arr, int *output_arr, int n, int k){

	// Creating an array for count and assigning all the values equals to 0
	int count_arr[10]={0};

	// Counting the values in given array and incrementing in the couting array
	for(int i = 0; i<n;i++){

		count_arr[(arr[i]/k)%10]+=1;
	}

	// Calculating Cummulative sum in count array
	for(int j=1; j<10; j++){

		count_arr[j] = count_arr[j] + count_arr[j-1];
	}


	// With the help of count array adding the values in sorted order in the output array

	for (int l = n-1; l >=0; l--)
	{
		output_arr[count_arr[ (arr[l]/k)%10 ] - 1] = arr[l]; 
        count_arr[ (arr[l]/k)%10 ]--; 
	}

	//copy the out_arr to arr so arr contains sorted elements according to current digit
	for (int m = 0; m < n; m++){ 
        arr[m] = output_arr[m]; 
    }
}



int main(){


	//given array
	int arr[] = {56, 91, 64, 34, 10, 25,101, 509, 10005, 12, 22, 11, 90}; 

	// No of elements in the array
	int n = sizeof(arr)/sizeof(arr[0]);

	radixSort(arr, n);
		
}