def insertion_sort(arr1, n):

	for i in range(1, n):
		key = arr1[i] # Choosing the key as the element on index i
		j = i-1 

		while (j>=0 and arr1[j]>key):
			arr1[j+1] = arr1[j]
			j-=1

		arr1[j+1] = key

