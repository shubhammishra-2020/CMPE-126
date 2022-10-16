#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[],int n, int targetVal, int left, int right){

    if(left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == targetVal) {
            return mid;
        } else if (arr[mid] > targetVal) {
            return recursiveBinarySearch(arr, n, targetVal, left, mid - 1);
        } else {
            return (recursiveBinarySearch(arr, n, targetVal, mid + 1, right));
        }
    }
    return -1;
}
int main() {
    int arr[3] = {4,3,98};
    if(recursiveBinarySearch(arr,3,98,0,2) == -1){
        cout << "Not in array" << endl;
    }
    cout << recursiveBinarySearch(arr,3,98,0,2);

    return 0;
}
