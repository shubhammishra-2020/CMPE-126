//
// Created by Shubham Mishra on 4/10/2022.
//

#ifndef HOMEWORKWEEK10_EXERCISEONE_H
#define HOMEWORKWEEK10_EXERCISEONE_H

using namespace std;
#include "queueasArray.h"
void exerciseOne();
void moveNFront(queueType <int> ,int);

void exerciseOne(){
    int element;
    queueType<int> test;
    test.initializeQueue();
    test.addQueue(1);
    test.addQueue(2);
    test.addQueue(6);
    test.addQueue(10);


    cout << "Enter which element you would like to move forward" << endl;
    cin >> element;
    moveNFront(test,element);
}
void moveNFront(queueType<int> rand,int num){
    if(!rand.isEmptyQueue()){
    for(int i=0; i<num;i++){

        rand.deleteQueue();
    }

}
#endif //HOMEWORKWEEK10_EXERCISEONE_H
