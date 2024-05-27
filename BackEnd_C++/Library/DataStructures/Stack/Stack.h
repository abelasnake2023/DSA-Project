#ifndef STACK_STACK_H
#define STACK_STACK_H
#include "NodeStack.h"


namespace stack {

    template<typename T>
    class Stack {
    private:
        NodeStack<T>* top;
        int size; // total size of the stack element
        bool arrOrLink; // by convention true = linked list based stack and
        // false = arr based stack

        T* arr;
        int topIndex; // top for array based stack
        int arrSize; // array size

        void deleteAllNode(NodeStack<T>* node);
        T* copy();

    public:
        // constructor and destructor
        ~Stack();
        Stack();
        Stack(int size);

        // major operation
        void push(T data);
        T pop();
        T peek();

        // other operation
        bool isEmpty();
        int getSize();

        // for only array based
        bool isFull();
        void expand(int size);
    };

}


#include "Stack.cpp"
#endif
