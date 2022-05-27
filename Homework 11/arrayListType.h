//
// Created by Shubham Mishra on 4/14/2022.
//

#ifndef HOMEWORK_11_ARRAYLISTTYPE_H
#define HOMEWORK_11_ARRAYLISTTYPE_H
#include <iostream>
#include <iomanip>
using namespace std;

template <class Type>
class arrayListType {
protected:
    Type *list;      //holds list of elements
    int length;      //stores the length of the list
    int maxSize;    //stores the maximum size of the list

public:
    const arrayListType<Type>& operator=
            (const arrayListType<Type>&);
    bool isEmpty() const      { return (length == 0); }
    bool isFull() const       { return (length == maxSize); }
    int listSize() const      { return length; }
    int maxListSize() const   { return maxSize; }
    void print();
    bool isItemAtEqual(int location, const Type& item) const
    { return(list[location] == item); }
    void insertAt(int location, const Type& insertItem);
    void insertEnd(const Type& insertItem);
    void removeAt(int location);
    void retrieveAt(int location, Type& retItem) const;
    void replaceAt(int location, const Type& repItem);
    void clearList()          { length = 0; }
    int seqSearch(const Type& item) const;
    void insert(const Type& insertItem);
    void remove(const Type& removeItem);
    int minLocation(int first, int last);
    void swap(int first, int second);
    void  selectionSort();
    int partition(int first, int last);
    void quickSort();
    void recquickSort(int first, int last);
    void merge(int array[], int left, int mid, int right);
    void mergeSort(int array[], int  begin, int end);
    void bubbleSort(int arr[], int n);
    void insertionSort(int arr[], int n);
    arrayListType(int = 100);
    arrayListType(const arrayListType<Type>& otherList);
    ~arrayListType()          { delete [] list; }
};
template <class Type>
void arrayListType<Type> :: insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
template <class Type>
void arrayListType<Type> :: bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

template <class Type>
void arrayListType<Type> :: mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

template <class Type>
void arrayListType<Type> :: merge(int array[], int const left, int const mid, int const right)
{
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
int arrayListType<Type> :: partition(int first, int last){
    Type pivot;
    int index, smallIndex;

    swap(first, (first+last) /2);
    pivot = list[first];
    smallIndex = first;
    for(index = first +1; index <= last; index++){
        if(list[index] < pivot){
            smallIndex++;
            swap(smallIndex,index);
        }
    }
    swap(first,smallIndex);
    return smallIndex;
}

template <class Type>
void arrayListType<Type> ::recquickSort(int first, int last) {
    int pivot;
    if(first < last){
        pivot = partition(first,last);
        recquickSort(first, pivot-1);
        recquickSort(pivot +1,last);
    }
}

template <class Type>
void arrayListType<Type> ::quickSort() {
    recquickSort(0,length-1);
}

template <class Type>
int arrayListType<Type> ::minLocation(int first, int last) {
    int minIndex;
    minIndex = first;

    for(int i=first + 1; i<= last;i++){
        if(list[i] < list[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}

template <class Type>
void arrayListType<Type> ::selectionSort() {
    int minIndex;
    for(int i=0; i<length-1; i++){
        minIndex = minLocation(i,length-1);
        swap(i,minIndex);
    }
}
template <class Type>
void arrayListType<Type> ::swap(int first, int second) {
    Type temp;

    temp = list[first];
    list[first] = list[second];
    list[second] = temp;

}

template <class Type>
void arrayListType<Type>::print()
{
    int count = 1;
    for (int i = 0; i < length; i++)
    {
        cout << setw(5) << list[i] << " ";
        if (count++ % 10 == 0) cout << endl;
    }
    cout << endl;
}

//insertAt(): inserts an item at a given location
//Arguments: location (int), insertItem (const Type&) | Returns: void
template <class Type>
void arrayListType<Type>::insertAt
        (int location, const Type& insertItem)
{
    if (location < 0 || location >= maxSize)
        cerr << "The position of the item to be inserted "
             << "is out of range" << endl;
    else
    if (length >= maxSize)  //list is full
        cerr << "Cannot insert in a full list" << endl;
    else
    {
        for (int i = length; i > location; i--)
            list[i] = list[i - 1];   //move the elements down
        list[location] = insertItem;  //insert item at position
        length++;
    }
} //end insertAt

//insertEnd(): inserts given item at end of list
//Arguments: insertItem(const Type&) | Returns: void
template <class Type>
void arrayListType<Type>::insertEnd(const Type& insertItem)
{

    if (length >= maxSize)  //the list is full
        cerr << "Cannot insert in a full list" << endl;
    else
    {
        list[length] = insertItem; //insert the item at the end
        length++;
    }
} //end insertEnd

//removeAt(): removes list element by location
//Arguments: location (int) | Returns: void
template <class Type>
void arrayListType<Type>::removeAt(int location)
{
    if (location < 0 || location >= length)
        cerr << "The location of the item to be removed "
             << "is out of range" << endl;
    else
    {
        for (int i = location; i < length - 1; i++)
            list[i] = list[i+1];
        length--;
    }
} //end removeAt

//retrieveAt(): retrieves a list item by location
//Arguments: location (int), retItem (Type&) | Returns: void
//retItem is sent by reference and is set to the list item
//retrieved by location
template <class Type>
void arrayListType<Type>::retrieveAt
        (int location, Type& retItem) const
{
    if (location < 0 || location >= length)
        cerr << "The location of the item to be retrieved is "
             << "out of range." << endl;
    else
        retItem = list[location];
} //end retrieveAt

//replaceAt(): replaces a list item by location
//Arguments: location (int), repItem (const Type&) | Returns: void
template <class Type>
void arrayListType<Type>::replaceAt
        (int location, const Type& repItem)
{
    if (location < 0 || location >= length)
        cerr << "The location of the item to be replaced is "
             << "out of range." << endl;
    else
        list[location] = repItem;

} //end replaceAt

//seqSearch(): searches the list for a target item
//Arguments: item (const Type&) | Returns: either -1 (item not
//found) or the location (int) (item found)
template <class Type>
int arrayListType<Type>::seqSearch(const Type& item) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < length; loc++)
        if (list[loc] == item)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

//insert(): inserts an item into the list
//Arguments: insertItem (const Type&) | Returns: void
//This function ensures only unique items are inserted into the
//list; duplicates are not entered and a cerr message is generated
template <class Type>
void arrayListType<Type>::insert(const Type& insertItem)
{
    int loc;

    if (length == 0)   //list is empty
        list[length++] = insertItem;    //insert the item and
        //increment the length
    else if (length == maxSize)
        cerr << "Cannot insert in a full list." << endl;
    else
    {
        loc = seqSearch(insertItem);
        if (loc == -1)    //the item to be inserted does not exist
            list[length++] = insertItem;
        else
            cerr << "the item to be inserted is already in "
                 << "the list. No duplicates are allowed." << endl;
    }
} //end insert

//remove(): removes an item from the list
//Arguments: removeItem (const Type&) | Returns: void
//This function only removes the first instance of the item
//(in the event duplicates were somehow inserted into the list
template<class Type>
void arrayListType<Type>::remove(const Type& removeItem)
{
    int loc;

    if (length == 0)
        cerr << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);
        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove

//arrayListType(): constructor
//Arguments: array size (int)
template <class Type>
arrayListType<Type>::arrayListType(int size)
{
    if (size < 0)
    {
        cerr << "The array size must be positive. Creating "
             << "an array of size 100. " << endl;
        maxSize = 100;
    }
    else
        maxSize = size;
    length = 0;
    list = new Type[maxSize];
} // end constructor

//arrayListType(): copy constructor
//Arguments: otherList (const arrayListType<Type>&)
template <class Type>
arrayListType<Type>::arrayListType
        (const arrayListType<Type>& otherList)
{
    maxSize = otherList.maxSize;
    length = otherList.length;
    list = new Type[maxSize]; //create the array
    for (int j = 0; j < length; j++)  //copy otherList
        list [j] = otherList.list[j];
} //end copy constructor

//operator=(): overloads assignment operator
//Arguments: otherList (const arrayListType<Type>&)
//Returns: *this
template <class Type>
const arrayListType<Type>& arrayListType<Type>::operator=
        (const arrayListType<Type>& otherList)
{
    if (this != &otherList)   //avoid self-assignment
    {
        delete [] list;
        maxSize = otherList.maxSize;
        length = otherList.length;
        list = new Type[maxSize];  //create the array
        for (int i = 0; i < length; i++)
            list[i] = otherList.list[i];
    }
    return *this;
}


#endif //HOMEWORK_11_ARRAYLISTTYPE_H
