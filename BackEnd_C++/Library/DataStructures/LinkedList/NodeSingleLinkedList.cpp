#include "NodeSingleLinkedList.h"


namespace LinkedList {

    // constructors
    template<typename T>
    NodeSingleLinkedList<T>::NodeSingleLinkedList(T data) {
        this->data = data;
    }
    template<typename T>
    NodeSingleLinkedList<T>::NodeSingleLinkedList() {}


    // set and get method for the instance pointer attribute `next`
    template<typename T>
    void NodeSingleLinkedList<T>::setNext(NodeSingleLinkedList<T>* next) {
        this->next = next;
    }
    template<typename T>
    NodeSingleLinkedList<T>* NodeSingleLinkedList<T>::getNext() {
        return this->next;
    }

    // set and get method for the instance attribute `data`
    template<typename T>
    void NodeSingleLinkedList<T>::setData(T data) {
        this->data = data;
    }
    template<typename T>
    T NodeSingleLinkedList<T>::getData() {
        return this->data;
    }
}
