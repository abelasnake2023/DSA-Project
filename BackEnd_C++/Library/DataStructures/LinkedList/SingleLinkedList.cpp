#include <iostream>
#include "SingleLinkedList.h"
#include "NodeSingleLinkedList.h"



namespace LinkedList {
    // Destructor
    template<typename T>
    SingleLinkedList<T>::~SingleLinkedList() {
        this->deleteAll();
    }
    // constructor
    template<typename T>
    SingleLinkedList<T>::SingleLinkedList() {
        this->head = NULL;
        this->size = 0;
    }

    // common operation
    template<typename T>
    NodeSingleLinkedList<T>* SingleLinkedList<T>::getNodeBefAftByPos
    (int pos, NodeSingleLinkedList<T>*& bef, NodeSingleLinkedList<T>*& aft) {
        if(pos >= this->size || pos < 0) {
            bef = NULL;
            aft = NULL;
            return NULL;
        }

        bef = this->head;
        aft = bef;

        for(int i = 0; i < pos - 1; i++) {
            bef = bef->getNext();
        }

        if(pos == 0) {
            aft = bef->getNext();
            bef = NULL;

            return this->head;
        }
        else if(pos == this->size - 1) {
            aft = NULL;
        }
        else {
            aft = bef->getNext()->getNext();
        }

        return bef->getNext();
    }

    template<typename T>
    NodeSingleLinkedList<T>* SingleLinkedList<T>::getNodeBefAftByData
    (T data, NodeSingleLinkedList<T>*& bef, NodeSingleLinkedList<T>*& aft, int& pos) {

        pos = 0;
        if(this->head == NULL) {
            bef = NULL;
            aft = NULL;
            pos = -1;
            return NULL;
        }

        bef = this->head;
        aft = bef;

        if(bef->getData() == data) {
            aft = bef->getNext();
            bef = NULL;
            pos = 0;

            return this->head;
        }
        while(bef->getNext() != NULL) {
            pos++;
            if(bef->getNext()->getData() == data) {
                aft = bef->getNext()->getNext();

                return bef->getNext();
            }
            bef = bef->getNext();
        }

        pos = -1;
        bef = NULL;
        aft = NULL;
        return NULL;
    }

    template<typename T>
    void SingleLinkedList<T>::delNodeAndAft(NodeSingleLinkedList<T>* node, int& countNodeDel) {
        if(node == NULL) {
            return;
        }

        countNodeDel++;
        this->delNodeAndAft(node->getNext(), countNodeDel);

        delete node;
        node = NULL;
    }

    template<typename T>
    void SingleLinkedList<T>::delNodeAndBef(NodeSingleLinkedList<T>* node, int& countNodeDel) {
        if(node == NULL) {
            return;
        }

        auto* n = this->head;
        auto* nA = n;

        while(n != node) {
            nA = n->getNext();
            delete n;
            n = NULL;

            n = nA;
            this->size--;
        }
        this->head = n->getNext();
        delete n;
        n = NULL;
        this->size--;
    }

    template<typename T>
    void SingleLinkedList<T>::printAllRecur(NodeSingleLinkedList<T>* node) {
        if(node == NULL) {
            return;
        }

        std::cout << node->getData() << "  ";
        printAllRecur(node->getNext());
    }

    template<typename T>
    void SingleLinkedList<T>::reverseListRecur(NodeSingleLinkedList<T>* node) {
        if(node->getNext() == NULL) {
            this->head = node;
            return;
        }

        auto* nextNode = node->getNext();

        this->reverseListRecur(nextNode);

        nextNode->setNext(node);
    }

    template<typename T>
    void SingleLinkedList<T>::printReverseRecur(NodeSingleLinkedList<T>* node) {
        if(node == NULL) {
            return;
        }

        printReverseRecur(node->getNext());
        std::cout << node->getData() << "  ";
    }

    // Insertion
    template<typename T>
    void SingleLinkedList<T>::insertAtFirst(T value) {
        auto* n = new NodeSingleLinkedList<T>(value);

        n->setNext(this->head);
        this->head = n;

        this->size++;
    }

    template<typename T>
    void SingleLinkedList<T>::insertAtLast(T value) {
        if(this->head == NULL) {
            this->insertAtFirst(value);
            return;
        }

        auto* n = new NodeSingleLinkedList<T>(value);
        n->setNext(NULL);

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        curr = this->getNodeBefAftByPos(this->size - 1, bef, aft);

        curr->setNext(n);

        this->size++;
    }

    template<typename T>
    void SingleLinkedList<T>::insertAtAnyPosition(T value, int pos) {
        if (pos < 0 || pos > this->size) {
            return;
        }
        else if (pos == 0) {
            this->insertAtFirst(value);
            return;
        }
        else if (pos == size) {
            this->insertAtLast(value);
            return;
        }


        auto* n = new NodeSingleLinkedList<T>();
        n->setData(value);

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        curr = this->getNodeBefAftByPos(pos, bef, aft);

        bef->setNext(n);
        n->setNext(curr);

        this->size++;
    }

    template<typename T>
    void SingleLinkedList<T>::insertAftData(T value, T theData) {
        auto* n = new NodeSingleLinkedList<T>();
        n->setData(value);

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        int pos = -1;

        curr = this->getNodeBefAftByData(theData, bef, aft, pos);

        if(curr == NULL) {
            return;
        }

        curr->setNext(n);
        n->setNext(aft);

        this->size++;
    }

    template<typename T>
    void SingleLinkedList<T>::insertBefData(T value, T theData) {
        auto* n = new NodeSingleLinkedList<T>();
        n->setData(value);

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        int pos = -1;

        curr = this->getNodeBefAftByData(theData, bef, aft, pos);

        if(curr == NULL) {
            return;
        }
        else if(bef == NULL) {
            this->head = n;
            n->setNext(curr);
        }
        else {
            bef->setNext(n);
            n->setNext(curr);
        }

        this->size++;
    }

    // Deletion
    template<typename T>
    void SingleLinkedList<T>::deleteAtFirst() {
        if(this->head == NULL) {
            return;
        }

        auto* n = head->getNext();
        delete this->head;
        this->head = n;

        this->size--;
    }

    template<typename T>
    void SingleLinkedList<T>::deleteAtLast() {
        if(this->head == NULL) {
            return;
        }
        else if(size == 1) {
            this->deleteAtFirst();
            return;
        }

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        curr = this->getNodeBefAftByPos(this->size - 1, bef, aft);

        delete curr;
        curr = NULL;
        bef->setNext(aft);

        this->size--;
    }

    template<typename T>
    void SingleLinkedList<T>::deleteAtAnyPosition(int pos) {
        if (pos >= size || pos < 0) {
            return;
        }
        else if (pos == 0) {
            deleteAtFirst();

            return;
        }
        else if (pos == size - 1) {
            deleteAtLast();

            return;
        }

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        curr = this->getNodeBefAftByPos(pos, bef, aft);

        bef->setNext(aft);

        this->size--;
    }

    template<typename T>
    void SingleLinkedList<T>::deleteByData(T data, bool all) {
        if(size == 0) {
            return;
        }

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        int pos = -1;

        curr = getNodeBefAftByData(data, bef, aft, pos);
        if(curr == NULL) {
            return;
        }
        delete curr;
        curr = NULL;

        if(bef == NULL) {
            this->head = aft;
        }
        else {
            bef->setNext(aft);
        }
        this->size--;

        if(!all) {
            return;
        }

        curr = getNodeBefAftByData(data, bef, aft, pos);
        while(curr != NULL) {
            delete curr;
            curr = NULL;

            if(bef == NULL) {
                this->head = aft;
            }
            else {
                bef->setNext(aft);
            }
            this->size--;

            curr = getNodeBefAftByData(data, bef, aft, pos);
        }
    }

    template<typename T>
    void SingleLinkedList<T>::deleteAll() {
        int nodeDeleted = 0;
        this->delNodeAndAft(this->head, nodeDeleted);
        this->head = NULL;
        this->size = 0;
    }

    template<typename T>
    void SingleLinkedList<T>::truncateByPos(int pos) {
        if(pos >= size || pos < 0) {
            return;
        }

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;

        curr = this->getNodeBefAftByPos(pos, bef, aft);

        if(curr == NULL) {
            return;
        }
        curr->setNext(NULL);
        int nodeDeleted = 0;
        this->delNodeAndAft(aft, nodeDeleted);
        this->size -= nodeDeleted;
    }

    template<typename T>
    void SingleLinkedList<T>::truncateByData(T data) {
        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        int pos = -1;

        curr = getNodeBefAftByData(data, bef, aft, pos);

        if(curr == NULL) {
            return;
        }
        curr->setNext(NULL);
        int nodeDeleted = 0;
        this->delNodeAndAft(aft, nodeDeleted);
        this->size -= nodeDeleted;
    }

    template<typename T>
    void SingleLinkedList<T>::truncateBeforeByPos(int pos) {
        if(pos >= size || pos < 0) {
            return;
        }

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;

        curr = this->getNodeBefAftByPos(pos, bef, aft);

        if(curr == NULL) {
            return;
        }

        int nodeDeleted = 0;
        this->delNodeAndBef(bef, nodeDeleted);
        this->size -= nodeDeleted;
    }

    template<typename T>
    void SingleLinkedList<T>::truncateBeforeByData(T data) {

        NodeSingleLinkedList<T>* bef;
        NodeSingleLinkedList<T>* aft;
        NodeSingleLinkedList<T>* curr;
        int pos = -1;

        curr = this->getNodeBefAftByData(data, bef, aft, pos);

        if(curr == NULL) {
            return;
        }

        int nodeDeleted = 0;
        this->delNodeAndBef(bef, nodeDeleted);
        this->size -= nodeDeleted;
    }

    // Updating
    template<typename T>
    void SingleLinkedList<T>::updateFirst(T value) {
        if(this->head == NULL) {
            return;
        }

        auto* n = this->head;
        n->setData(value);
    }

    template<typename T>
    void SingleLinkedList<T>::updateLast(T value) {
        if(this->head == NULL) {
            return;
        }

        NodeSingleLinkedList<T>* bef = NULL;
        NodeSingleLinkedList<T>* aft = NULL;
        NodeSingleLinkedList<T>* curr = NULL;

        curr = this->getNodeBefAftByPos(this->size - 1, bef, aft);
        curr->setData(value);
    }

    template<typename T>
    void SingleLinkedList<T>::updateByPos(T value, int pos) {
        if(this->head == NULL || pos >= this->size || pos < 0) {
            return;
        }

        NodeSingleLinkedList<T>* bef = NULL;
        NodeSingleLinkedList<T>* aft = NULL;
        NodeSingleLinkedList<T>* curr = NULL;

        curr = this->getNodeBefAftByPos(pos, bef, aft);
        curr->setData(value);
    }

    template<typename T>
    void SingleLinkedList<T>::updateAftData(T value, T theData) {
        if(this->head == NULL) {
            return;
        }

        NodeSingleLinkedList<T>* bef = NULL;
        NodeSingleLinkedList<T>* aft = NULL;
        NodeSingleLinkedList<T>* curr = NULL;
        int pos = -1;

        curr = this->getNodeBefAftByData(theData, bef, aft, pos);
        if(aft == NULL) {
            return;
        }

        aft->setData(value);
    }

    template<typename T>
    void SingleLinkedList<T>::updateBefData(T value, T theData) {
        if(this->head == NULL) {
            return;
        }

        NodeSingleLinkedList<T>* bef = NULL;
        NodeSingleLinkedList<T>* aft = NULL;
        NodeSingleLinkedList<T>* curr = NULL;
        int pos = -1;

        curr = this->getNodeBefAftByData(theData, bef, aft, pos);
        if(bef == NULL) {
            return;
        }

        bef->setData(value);
    }

    // Retrieving
    template<typename T>
    T SingleLinkedList<T>::getData(int pos) {
        if(this->head == NULL || pos >= this->size || pos < 0) {
            return T();
        }

        NodeSingleLinkedList<T>* bef = NULL;
        NodeSingleLinkedList<T>* aft = NULL;
        NodeSingleLinkedList<T>* curr = NULL;

        curr = this->getNodeBefAftByPos(pos, bef, aft);

        return curr->getData();
    }

    template<typename T>
    T SingleLinkedList<T>::getDataRelData(int posRelTheData, T theData) {
        if(this->head == NULL) {
            return T();
        }

        NodeSingleLinkedList<T>* bef = NULL;
        NodeSingleLinkedList<T>* aft = NULL;
        NodeSingleLinkedList<T>* curr = NULL;
        int pos = -1;

        curr = this->getNodeBefAftByData(theData, bef, aft, pos);
        if(pos == -1) {
            return T();
        }
        posRelTheData += pos;

        curr = this->getNodeBefAftByPos(posRelTheData, bef, aft);
        if(curr == NULL) {
            return T();
        }

        return curr->getData();
    }

    // Special operation
    template<typename T>
    void SingleLinkedList<T>::printAll() {
        auto* n = this->head;

        std::cout << std::endl << std::endl;
        this->printAllRecur(n);
        std::cout << std::endl << std::endl;
    }

    template<typename T>
    void SingleLinkedList<T>::printReverse() {
        auto* n = this->head;

        std::cout << std::endl << std::endl;
        this->printReverseRecur(n);
        std::cout << std::endl << std::endl;
    }

    template<typename T>
    int SingleLinkedList<T>::getSize() {
        return this->size;
    }

    template<typename T>
    void SingleLinkedList<T>::reverseList() {
        if(this->head == NULL) {
            return;
        }

        auto* node = this->head;

        reverseListRecur(node);

        node->setNext(NULL);
    }

}