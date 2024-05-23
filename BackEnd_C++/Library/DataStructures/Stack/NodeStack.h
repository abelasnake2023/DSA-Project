#ifndef STACK_NODESTACK_H
#define STACK_NODESTACK_H


namespace stack {

    template<typename T>
    class NodeStack {
    private:
        NodeStack<T>* prev;
        T data;

    public:
        NodeStack(T data);
        NodeStack();

        void setPrev(NodeStack<T>* node);
        NodeStack<T>* getPrev();

        void setData(T data);
        T getData();
    };

}


#include "NodeStack.cpp"
#endif