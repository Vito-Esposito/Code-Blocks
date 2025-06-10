#ifndef STACK_H
#define STACK_H

class Stack{
    protected:
                int* stack;
                int size;
                int top;
    public:
            Stack(int);
            ~Stack();

            int pop();
            Stack& push(int);
            bool isEmpty() const;
            bool isFull() const;
};

#endif
