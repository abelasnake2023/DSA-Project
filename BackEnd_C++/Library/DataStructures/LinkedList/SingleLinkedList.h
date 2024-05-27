#ifndef SINGLE_LINKED_LIST_SINGLELINKEDLIST_H
#define SINGLE_LINKED_LIST_SINGLELINKEDLIST_H

#include "NodeSingleLinkedList.h"

namespace LinkedList {

    template<typename T>
    class SingleLinkedList {
    private:
        NodeSingleLinkedList<T>* head;
        int size;

        void delNodeAndAft(NodeSingleLinkedList<T>* node, int& countNodeDel);
        void delNodeAndBef(NodeSingleLinkedList<T>* node, int& countNodeDel);
        void printAllRecur(NodeSingleLinkedList<T>* node);
        NodeSingleLinkedList<T>* getNodeBefAftByPos
        (int pos, NodeSingleLinkedList<T>*& bef, NodeSingleLinkedList<T>*& aft);
        NodeSingleLinkedList<T>* getNodeBefAftByData
        (T data, NodeSingleLinkedList<T>*& bef, NodeSingleLinkedList<T>*& aft, int& pos);
        void reverseListRecur(NodeSingleLinkedList<T>* node);
        void printReverseRecur(NodeSingleLinkedList<T>* node);

    public:
        // Destructor
        ~SingleLinkedList();
        // constructor
        SingleLinkedList();

        // Insertion
        void insertAtFirst(T value);
        void insertAtLast(T value);
        void insertAtAnyPosition(T value, int pos);
        void insertAftData(T value, T theData);
        void insertBefData(T value, T theData);

        // Deletion
        void deleteAtFirst();
        void deleteAtLast();
        void deleteAtAnyPosition(int pos);
        void deleteByData(T data, bool all);
        void deleteAll();
        void truncateByPos(int pos);
        void truncateByData(T data);
        void truncateBeforeByPos(int pos);
        void truncateBeforeByData(T data);

        // Updating
        void updateFirst(T value);
        void updateLast(T value);
        void updateByPos(T value, int pos);
        void updateAftData(T value, T theData);
        void updateBefData(T value, T theData);

        // Retrieving
        T getData(int pos);
        T getDataRelData(int posRelTheData, T theData);

        // Special operation
        void printAll();
        void printReverse();
        int getSize();
        void reverseList();
    };

}

#include "SingleLinkedList.cpp" // this line is needed b/c we are dealing with
// generic class if not the line `#include "SingleLinkedList.cpp"` is not needed.
#endif