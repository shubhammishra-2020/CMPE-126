#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i= low -1;

    for(int j=low; j<= high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }

    }
    swap(arr[i+1], arr[high]);

    return (i+1);

}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int partitionInd = partition(arr,low,high);
        quickSort(arr,low,partitionInd -1);
        quickSort(arr,partitionInd +1, high);
    }
}
int main() {
    int arr[] = {21,10,38,16,44,27,28,15,39};
    quickSort(arr,0,8);
    for(int i=0; i<9; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
