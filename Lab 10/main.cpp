#include <iostream>
#include <time.h>
#include "Sort.h"
#include <fstream>
using namespace std;

int main() {
    ofstream runData("runTime.txt");
    Sort <int> f;
    /*
    f.getElement();
    cout << "Elements before bubble sort: ";
    f.print();

    clock_t t;
    t = clock();
    f.bubbleSort();
    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    runData << "Time taken for Bubble sort: " << time_taken << " seconds" << endl;
    time_taken = 0;

    cout << "Elements after bubble sort: ";
    f.print();
    f.getElement();

    f.getElement();
    cout << "Elements before insertion sort: ";
    f.print();

    clock_t i;
    i = clock();
    f.insertionSort();
    i = clock() - i;
    time_taken = ((double)i) / CLOCKS_PER_SEC;
    runData << "Time taken for Insertion sort: " << time_taken << " seconds" << endl;
    time_taken = 0;

    cout << "Elements after insertion sort: " ;
    f.print();
    f.getElement();
    */
    f.getElement();
    cout << "Elements before merge sort: ";
    f.print();

    //clock_t m;
    //m = clock();
    f.mergeSort(f.arr,0,f.n);
    //m  = clock() - m;
    //time_taken = ((double)m) / CLOCKS_PER_SEC;
    //runData << "Time taken for Merge Sort: " << time_taken << " seconds" << endl;
    //time_taken = 0;

    cout << "Elements after Merge Sort: ";
    f.print();

    /*
    f.getElement();
    cout << "Elements before quick sort: ";
    f.print();

    clock_t q;
    q = clock();
    f.quickSort();
    q  = clock() - q;
    time_taken = ((double)q) / CLOCKS_PER_SEC;
    runData << "Time taken for Quick Sort: " << time_taken << " seconds" << endl;
    time_taken = 0;

    cout << "Elements after Quick Sort: ";
    f.print();

    f.getElement();
    cout << "Elements before selection sort: ";
    f.print();

    clock_t s;
    s = clock();
    f.selectionSort();
    s  = clock() - s;
    time_taken = ((double)s) / CLOCKS_PER_SEC;
    runData << "Time taken for Selection Sort: " << time_taken << " seconds" << endl;
    time_taken = 0;

    cout << "Elements after selection Sort: ";
    f.print();
    */





}
