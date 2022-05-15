#include <iostream>

int partition(int array[],int start,int end){

    int pivot = end;
    int i = start;
    int j = start;

    while(i<=pivot){

        if(array[i]>array[pivot]) i++;

        else{

            std::swap(array[i],array[j]);
            i++;
            j++;
        }
    }

    return j-1;

}

void quickSort(int array[],int start,int end){

    int stack[end-start+1];
    int top=-1;

    stack[++top]=start;
    stack[++top]=end;

    while(top>=0){

        end=stack[top--];
        start=stack[top--];

        int pivotIndex=partition(array,start,end);

        if(pivotIndex-1>start){

            stack[++top]=start;
            stack[++top]=pivotIndex-1;
        }

        if(pivotIndex+1<end){

            stack[++top]=pivotIndex+1;
            stack[++top]=end;
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
    int array[n]={34,12,78,246,9891,25,90,34,2,10};

    std::cout << "Unsorted array:" << std::endl;
    displayArray(array,n);

    std::cout << "Sorted array:" << std::endl;
    quickSort(array,0,n-1);
    displayArray(array,n);

    return 0;
}