#include <iostream>
using namespace std;
int count = 0;
void bubbleSort(int arr[], int n){
    int i, j;
    for(int i=0; i< n-1; i++){
        for(j=0; j< n - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int recursiveseqSearch(int arr[], int n, int x){
    int elem = n -1;
    if (arr[elem] == x) {
        return elem;
    } else {
        recursiveseqSearch(arr, n-1, x);
    }
    return -1;
}


int recursiveBinarySearch(int arr[],int n, int targetVal, int left, int right){
    if(left <= right) {
        if(1 + (right - left) < 15){
            count++;
            return recursiveseqSearch(arr,n,targetVal);
        }else {
            int mid = left + (right - left) / 2;

            if (arr[mid] == targetVal) {
                count++;
                return mid;
            } else if (arr[mid] > targetVal) {
                count++;
                return recursiveBinarySearch(arr, n, targetVal, left, mid - 1);
            } else {
                count++;
                return (recursiveBinarySearch(arr, n, targetVal, mid + 1, right));
            }
        }
    }
    return -1;

}

int main() {
    int arr[1000];
    for(int i=0; i<1000; i++){
        arr[i] = rand() % 100;
    }
    bubbleSort(arr,1000);
    if(recursiveBinarySearch(arr,1000,44,0,999) == -1){
        cout << "Not Found" << endl;
    }else{
        cout << "The value is located at: "<< recursiveBinarySearch(arr,1000,44,0,999) << endl;
    }

    cout << "Number of Comparisons done: " << count;

    return 0;
}
