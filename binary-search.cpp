#include <iostream>

void binarySearch(int array[],int n,int find){
    int start=0;
    int end=n-1;
    int middle;

    while(start<=end){
        middle=(start+end)/2;
        // increment/decrement the middle
        // because it's not equal to find.
        // it also prevents the endless loop.
        if(find<array[middle]) end=middle-1;
        else if(find>array[middle]) start=middle+1;
        else{
            std::cout << "Outcome: Exists at index: " << middle << std::endl;
            break;
        }
    }

    if(find!=array[middle])
        std::cout << "Outcome: Doesn't exist in the array." << std::endl;
}

void displayArray(int array[],int n){
    for (int i=0; i<n; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(){

    int n=10;
    int array[n]={1,2,3,4,5,6,7,8,9,10};
    int find;

    std::cout << "Search the array for the number: ";
    std::cin >> find;

    std::cout << "Array: ";
    displayArray(array,n);
    std::cout << "Looking for: " << find << std::endl;
    binarySearch(array,n,find);

    return 0;
}