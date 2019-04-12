# Function to search for a value in a given array.
def binary_search(input_array, value):

    lowest = 0
    highest = len(input_array)-1
    
    while(lowest<=highest):
        
        middle = int((lowest+highest)/2)
        
        if(input_array[middle] == value):
            return middle

        elif(input_array[middle]<value):
            lowest = middle+1

        else:
            highest = middle-1
    
    return -1

