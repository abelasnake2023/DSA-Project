#include "Stack.h"
#include <iostream>


namespace stack {

    // constructor and destructor
    template<typename T>
    Stack<T>::~Stack() {
        if(this->arrOrLink) {
            this->deleteAllNode(this->top);
            this->top = nullptr;
        }
        else {
            delete this->arr;
            this->arr = nullptr;
        }
    }
    template<typename T>
    Stack<T>::Stack() {
        this->arrOrLink = true;
        this->top = nullptr;
        this->size = 0;

        this->arr = nullptr;
        this->topIndex = -1;
        this->arrSize = -1;
    }
    template<typename T>
    Stack<T>::Stack(int size) {
        this->arrOrLink = false;
        this->topIndex = -1;
        this->arrSize = size;
        if(size < 1) {
            this->arrSize = 20;
        }
        this->arr = new T[this->arrSize];
        this->size = 0;


        this->top = nullptr;
    }

    // private methods
    template<typename T>
    T* Stack<T>::copy() {
        auto expandArr = new T[this->arrSize];
        for(int i = 0; i < this->size; i++) {
            expandArr[i] = this->arr[i];
        }

        return expandArr;
    }
    template<typename T>
    void Stack<T>::deleteAllNode(NodeStack<T>* node) {
        if(node == nullptr) {
            return;
        }

        this->deleteAllNode(node->getPrev());

        delete node;
        node = nullptr;
    }

    // major operation
    template<typename T>
    void Stack<T>::push(T data) {
        // linked list based stack
        if(this->arrOrLink) {
            auto* node = new NodeStack<T>(data);
            node->setPrev(this->top);
            this->top = node;
            this->size++;
            return;
        }

        // array based stack
        if(this->topIndex == this->arrSize - 1) {
            std::cout << "stack Full!" << std::endl;
            return;
        }
        this->topIndex++;
        this->arr[this->topIndex] = data;
        this->size++;
    }

    template<typename T>
    T Stack<T>::pop() {
        // linked list based stack
        if(this->arrOrLink) {
            if(this->top == nullptr) {
                std::cout << "stack underflow!" << std::endl;
                return T();
            }

            auto* del = this->top;
            T val = del->getData();
            this->top = del->getPrev();

            delete del;
            del = nullptr;

            this->size--;
            return val;
        }

        // array based stack
        if(this->topIndex == -1) {
            std::cout << "stack underflow!" << std::endl;
            return T();
        }
        T valArr = this->arr[this->topIndex];
        this->arr[this->topIndex] = T();
        this->size--;
        this->topIndex--;
        return valArr;
    }

    template<typename T>
    T Stack<T>::peek() {
        if(this->arrOrLink) {
            if(this->top != nullptr) {
                return this->top->getData();
            }
            else {
                return T();
            }
        }

        if(topIndex == -1) {
            return T();
        }
        return this->arr[topIndex];
    }

    // other operation
    template<typename T>
    bool Stack<T>::isEmpty() {
        if(this->arrOrLink) {
            if(this->top == nullptr) {
                return true;
            }
            return false;
        }

        if(topIndex == -1) {
            return true;
        }
        return false;
    }
    template<typename T>
    int Stack<T>::getSize() {
        return this->size;
    }

    // only array based:
    template<typename T>
    bool Stack<T>::isFull() {
        if(this->arrOrLink) {
            return false;
        }

        if(this->topIndex + 1 == this->arrSize) {
            return true;
        }
        return false;
    }

    template<typename T>
    void Stack<T>::expand(int s) {
        if(s <= this->arrSize) {
            this->arrSize = 2 * this->arrSize;
        }
        else {
            this->arrSize = s;
        }

        T* delArr = this->arr;
        this->arr = copy();

        delete[] delArr;
        delArr = nullptr;
    }
}