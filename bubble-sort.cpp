#include <iostream>

void bubbleSort(int array[], int n){
    int temp = 0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++){
            if (array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void displayArray(int array[],int n){
    for (int i=0; i<n; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(){

    int n=10;
    int array[n]={1,5,25,7,12,87,232,5,0,-2};
    
    std::cout << "Unsorted array:" << std::endl;
    displayArray(array,n);
    std::cout << "Sorted array:" << std::endl;
    bubbleSort(array,n);
    displayArray(array,n);

    return 0;
}