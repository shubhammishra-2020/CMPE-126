#include <iostream>
#include "arrayListType.h"
using namespace std;

int main() {
    arrayListType <int> test;
    test.insert(12);
    test.insert(5);
    test.insert(99);
    test.insert(34);
    test.insert(23);
    test.insert(19);
    test.insert(33);
    test.insert(2);
    test.insert(90);
    test.insert(15);
    test.insert(45);

    cout << "Before Selection Sort: ";
    test.print();

    test.selectionSort();
    cout << "After Selection Sort: ";
    test.print();

    arrayListType <int> t1;
    t1.insert(12);
    t1.insert(5);
    t1.insert(99);
    t1.insert(34);
    t1.insert(23);
    t1.insert(19);
    t1.insert(33);
    t1.insert(2);
    t1.insert(90);
    t1.insert(15);
    t1.insert(45);

    cout << "Before Quick Sort: ";
    t1.print();

    t1.quickSort();
    cout << "After Quick Sort: ";
    t1.print();

    arrayListType <int> t2;
    t2.insert(12);
    t2.insert(5);
    t2.insert(99);
    t2.insert(34);
    t2.insert(23);
    t2.insert(19);
    t2.insert(33);
    t2.insert(2);
    t2.insert(90);
    t2.insert(15);
    t2.insert(45);

    int arr[] = {12, 5,  99,  34,   23,   19,  33,  2,  90,  15,  45};

    cout << "Before Merge Sort: ";
    for(int i=0; i<10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    t2.mergeSort(arr,0,9);
    cout << "After Merge Sort: ";
    for(int i=0; i<10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int ar1r[] = {12, 5,  99,  34,   23,   19,  33,  2,  90,  15,  45};
    cout << "Before Bubble Sort: ";
    for(int i=0; i<10;i++){
        cout << ar1r[i] << " ";
    }
    cout << endl;
    t2.bubbleSort(ar1r,10);
   cout << "After Bubble Sort: ";
    for(int i=0; i<10;i++){
        cout << ar1r[i] << " ";
    }
    cout << endl;
    int ar2r[] = {12, 5,  99,  34,   23,   19,  33,  2,  90,  15,  45};
    cout << "Before Insertion Sort: ";
    for(int i=0; i<10;i++){
        cout << ar2r[i] << " ";
    }
    cout << endl;
    t2.insertionSort(ar2r,10);

    cout << "After Insertion Sort: ";
    for(int i=0; i<10;i++){
        cout << ar2r[i] << " ";
    }











    return 0;
}
