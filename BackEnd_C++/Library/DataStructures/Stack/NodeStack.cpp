#include "NodeStack.h"


namespace stack {

    template<typename T>
    NodeStack<T>::NodeStack(T data) {
        this->data = data;
        this->prev = nullptr;
    }
    template<typename T>
    NodeStack<T>::NodeStack() {
        this->prev = nullptr;
    }

    template<typename T>
    void NodeStack<T>::setPrev(NodeStack<T>* node) {
        this->prev = node;
    }
    template<typename T>
    NodeStack<T>* NodeStack<T>::getPrev() {
        return this->prev;
    }

    template<typename T>
    void NodeStack<T>::setData(T data) {
        this->data = data;
    }
    template<typename T>
    T NodeStack<T>::getData() {
        return this->data;
    }

}