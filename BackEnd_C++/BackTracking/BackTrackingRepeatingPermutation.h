#ifndef COURSESCHEDULIZERBACKEND_BACKTRACKINGREPEATINGPERMUTATION_H
#define COURSESCHEDULIZERBACKEND_BACKTRACKINGREPEATINGPERMUTATION_H


#include <iostream>
#include <vector>


namespace BackTracking {

    template<typename T>
    class ValidColl {
    private:
        T* validColl; // no need to deleted validColl
        int size;

    public:
        ValidColl(T* validColl, int size);

        T* getValidColl();
        int getSize();
    };

    template<typename T>
    class BackTrackingRepeatingPermutation { // Abstract class
    private:
        T* copy(T* possComb);
        std::vector<ValidColl<T>*> allValidColl;

        void delete2DArrayValidCollections();

    protected:
        T* arr;
        int n;
        int slot;
        bool display;

        void subSetRepeatingPermutation(T* possComb, int& possCombIndex);
        void combineWithAllArrEle(T* possComb, int& possCombIndex);

        virtual bool totalWeight(T* check, int numOfElement) = 0;
        virtual void setArr(T* arr) = 0;
        virtual void setN(int n) = 0;
        virtual void setSlot(int slot) = 0;

    public:
        BackTrackingRepeatingPermutation();
        virtual ~BackTrackingRepeatingPermutation();
        std::vector<ValidColl<T>*>* allValidCombination(bool dis = false);
    };

}


#include "BackTrackingRepeatingPermutation.cpp"
#endif