def bubble_sort(arr):
    
    for i in range(len(arr)-1):
        
        swapped = False #used for optimization
        
        for j in range(len(arr)-1-i):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1] = arr[j+1], arr[j]
                swapped = True
                
        if swapped == False:
            break
        
    print("Array after sorting is:", arr)
    

#driver code
if __name__ == '__main__':
    arr = [10,9,8,45,2,96,12]
    print("Array before sorting is ",arr)
    bubble_sort(arr)