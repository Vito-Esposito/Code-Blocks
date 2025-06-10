#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack(int size){
    this->size= size;
    stack= new int[size];
    top= -1;  // così siamo sicuri che top non è indice ancora di nessun elemento, nemmeno del primo (0)
}

Stack::~Stack(){
    delete [] stack;
}

int Stack::pop(){
    int item= 0;

    if(!isEmpty()){
        item= stack[top--];
    }
    else{
        cout << "Stack vuoto!" << endl;
    }

    return item;
}

Stack& Stack::push(int item){
    if(!isFull()){
        stack[++top]= item;
    }
    else{
        cout << "Stack pieno!" << endl;
    }

    return *this;
}

bool Stack::isEmpty() const{
    return top == -1;
}

bool Stack::isFull() const{
    return top == size-1;
}

