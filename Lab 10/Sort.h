//
// Created by Shubham Mishra on 4/27/2022.
//

#ifndef LAB_10_SORT_H
#define LAB_10_SORT_H
#include <time.h>
#include <algorithm>
using namespace std;

template <class Type>
class Sort {
public:
    const static int n = 10000;
    Type arr[n];
    void getElement();
    void merge(int array[], int left, int mid, int right);
    void mergeSort(int array[], int const begin, int const end);
    void quickSort();
    void recquickSort(int first, int last);
    int partition(int first, int last);
    void bubbleSort();
    void selectionSort();
    void insertionSort();
    void print();
    void swap(int first, int second);
    int minLocation(int first, int last);
};
template <class Type>
int Sort<Type> ::minLocation(int first, int last) {
    int minIndex;
    minIndex = first;

    for(int i=first + 1; i<= last;i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}
template <class Type>
void Sort <Type> ::selectionSort() {
    int minIndex;
    for(int i=0; i<n-1; i++){
        minIndex = minLocation(i,n-1);
        swap(i,minIndex);
    }
}
template <class Type>
void Sort<Type> :: swap(int first, int second){
    Type temp;
    temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

template <class Type>
int Sort<Type> ::partition(int first, int last) {
    Type pivot;
    int index, smallIndex;
    int temp = (first + last) / 2;
    swap(first, temp);
    pivot = arr[first];
    smallIndex = first;
    for(index = first +1; index <= last; index++){
        if(arr[index] < pivot){
            smallIndex++;
            swap(smallIndex,index);
        }
    }
    swap(first,smallIndex);
    return smallIndex;
}
template <class Type>
void Sort<Type> ::quickSort() {
   recquickSort(0, n-1);
}
template <class Type>
void Sort <Type> ::recquickSort(int first, int last) {
    int pivot;
    if(first < last){
        pivot = partition(first,last);
        recquickSort(first, pivot-1);
        recquickSort(pivot +1,last);
    }
}
template <class Type>
void Sort <Type> ::merge(int array[], int left, int mid, int right){
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
            *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
    indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
template <class Type>
void Sort<Type> :: insertionSort(){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
template <class Type>
void Sort <Type> ::getElement() {
    for(int i=0; i<n; i++){
        arr[i] = rand() % 100;
    }

}
template <class Type>
void Sort <Type> ::mergeSort(int array[], int const begin, int const end) {

    if (begin >= end) {
        return;// Returns recursively
    }

    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
template <class Type>
void Sort <Type> ::bubbleSort() {

    int i, j;

    for(i = 0; i< n - 1;i++){
        for(j = 0; j< n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}
template <class Type>
void Sort <Type> :: print(){
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}


#endif //LAB_10_SORT_H
