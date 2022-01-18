#include <iostream>
using namespace std;

//this function used for swapping the array elements
void swap(int *a, int *b){
    int *temp = *a;
    a = *b;
    b = *temp;
}

//bubble sort function
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1;i++){

        int swapped = 0;
        
        for(int j=0; j<n-i-1;j++){

            if(arr[j]>arr[j+1]){ //for descending order use arr[j]<arr[j+1]
                swap(&arr[j],&arr[j+1]);
                swapped = 1;
            }
        }

        if(swapped==0){
            break;
        }
    }
}



int main(){
    int arr[] = {10,9,8,45,2,96,12}; //array size is 7
    bubble_sort(arr,7);
    return 0;
}
