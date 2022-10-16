#include <iostream>
using namespace std;
a= {0, 1, 3, 6, 4};

int recursiveseqSearch(int arr[], int n, int x){
    if(x >= n){
        return -1;
    }
    if(x-1 >= 0 && arr[x] > arr[x-1] && x+1 < n && arr[x] > arr[x+1]){
        return arr[x];
    }
    if(x-1 < 0 && arr[x] > arr[x+1]){
        return arr[x];
    }
    if(x+1 >= n && arr[x] > arr[x-1]){
        return arr[x];
    }
    return recursiveseqSearch(a, n, x+1);

}
void returnPeak(int arr[], int size){
    cout << "Peak Element is: "<< recursiveseqSearch(arr,6,0);
};
int main() {
    int arr[] = {12, 67, 90 ,100, 400, 399};
    returnPeak(arr,6);
    return 0;
}
