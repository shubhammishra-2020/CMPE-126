#include <iostream>
using namespace std;

int recursiveseqSearch(int arr[], int n, int x){
    int elem = n -1;
    if (arr[elem] == x) {
        return elem;
    } else {
        recursiveseqSearch(arr, n-1, x);
    }
    return -1;
}
int main() {
    int arr[] = {10,5,33};
    if(recursiveseqSearch(arr,3,33) == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << recursiveseqSearch(arr,3,33);
    }


    return 0;
}
