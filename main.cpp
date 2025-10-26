#include <iostream>
#include<cstring>
#include <cstdlib>
#include "sorting.h"

using namespace std; 

int main(int argc, char*argv[]){
    if(argc < 3){
        cout<<"Please Enter in form of:./sort (Type of sorting) n1 n2 n3 ... n"<<endl;
        return 1;
    }

    string sort=argv[1];
    int N=argc-2;
    int a[N];

    for(int i=0; i<N; i++){
        a[i]=atoi(argv[i+2]);
    }

    cout<<"Original Array:"<<endl;
    display(a, N);

    if(sort == "bubble"){
        cout<<"\nBubble Sort:"<<endl;
        bubbleSort(a, N);
    } 
    else if(sort == "insert"){
        cout<<"\nInsertion Sort:"<<endl;
        insertion(a, N);
    } 
    else if(sort == "selection"){
        cout<<"\nSelection Sort:"<<endl;
        selectionSort(a, N);
    } 
    else{
        cout<<"Wrong input please try again"<<endl;
        return 1;
    }
    display(a, N); 

    return 0;
}


