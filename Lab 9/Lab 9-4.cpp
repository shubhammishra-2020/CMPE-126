#include <iostream>
using namespace std;
int recursiveseqSearch(int arr[], int n, int x){
    int elem = n -1;
    if (arr[elem] > x) {
        x = arr[elem];
        return recursiveseqSearch(arr,elem-1,x);
    } else{
        return elem + 1;
    }
}
void returnPeak(int arr[], int size){
    cout << "Peak Element is: "<< recursiveseqSearch(arr,6,0);
};
int main() {
    int arr[] = {12, 67, 90 ,100, 400, 399};
    returnPeak(arr,6);
    return 0;
}
