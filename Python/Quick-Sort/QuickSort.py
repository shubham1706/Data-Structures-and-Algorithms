# Function to sort the given array recursively.
def quick_sort(arr, low, high):
        if (low< high):
                pivot = partition(arr, low, high)
                quick_sort(arr, low, pivot-1)
                quick_sort(arr, pivot+1, high)

# Function that returns the pivot element for the sorting.
def partition(arr, low, high):
        pivot = arr[high]
        i = (low-1)

        for j in range(low, high):
                if arr[j]<=pivot:
                        i+=1
                        arr[i], arr[j] = arr[j], arr[i]

        arr[i+1], arr[high] = arr[high], arr[i+1]
        return (i+1)
