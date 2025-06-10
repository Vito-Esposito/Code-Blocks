#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

template <class T>
class Stack{
        protected:
                    T* stack;
                    int size;
                    int top;

        public:
                    Stack(int size){
                        this->size= size;
                        stack= new T[size];
                        top= -1;
                    }

                    ~Stack(){
                        delete [] stack;
                    }

                    bool isEmpty() const{
                        return top == -1;
                    }

                    bool isFull() const{
                        return top == size-1;
                    }

                    Stack& push(T item){
                        if(isFull())
                            cout << "Stack pieno!" << endl;
                        else
                            stack[++top]= item;

                        return *this;
                    }

                    T pop(){
                        T item= 0;

                        if(isEmpty())
                            cout << "Lo stack e' vuoto!";
                        else{
                            item= stack[top--];
                        }
                        return item;
                    }
};

template <class T>
class Stack2: public Stack<T>{
        public:
                Stack2(int size): Stack<T>(size){}

                int items() const{
                    return this->top+1;
                }

                int flush(){
                    int cnt= this->top+1;
                    this->top= -1;
                    return cnt;
                }

                int multipush(T *items, int num){
                    int ins= 0;

                    for(int i=0; i<num; i++){
                        if(this->isFull())
                            break;
                        this->stack[++this->top]= items[i];
                        ins++;
                    }
                }
};

#endif // STACK_H
