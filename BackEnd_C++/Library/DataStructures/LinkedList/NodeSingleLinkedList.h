#ifndef SINGLE_LINKED_LIST_NODESINGLELINKEDLIST_H
#define SINGLE_LINKED_LIST_NODESINGLELINKEDLIST_H


namespace LinkedList {

    template<typename T>
    class NodeSingleLinkedList {
    private:
        NodeSingleLinkedList<T>* next;
        T data;

    public:
        // constructors
        NodeSingleLinkedList(T data);
        NodeSingleLinkedList();

        // set and get method for the instance pointer attribute `next`
        void setNext(NodeSingleLinkedList<T>* next);
        NodeSingleLinkedList<T>* getNext();

        // set and get method for the instance attribute `data`
        void setData(T data);
        T getData();
    };

}

#include "NodeSingleLinkedList.cpp" // this line is needed b/c we are dealing with
// generic class if not the line `#include "NodeSingleLinkedList.cpp"` is not needed.
#endif