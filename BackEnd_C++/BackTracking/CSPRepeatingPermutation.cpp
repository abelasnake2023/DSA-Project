#include "CSPRepeatingPermutation.h"


namespace csp {
    template<typename T>
    CSPRepeatingPermutation<T>::~CSPRepeatingPermutation() {

    }
    template<typename T>
    CSPRepeatingPermutation<T>::CSPRepeatingPermutation(T* collection, int n, int slot,
                                                        std::vector<bool (*)(T*, int)>* allFactorsFuncAddress)
        : BackTracking::BackTrackingRepeatingPermutation<T>()
    {
        this->allFactorsFuncAddress = allFactorsFuncAddress;
        this->setArr(collection);
        this->setN(n);
        this->setSlot(slot);
    }


    template<typename T>
    bool CSPRepeatingPermutation<T>::totalWeight(T* check, int numOfElement) {
        if(!this->AllFactors(check, numOfElement)) {
            return false;
        }
        return true;
    }
    template<typename T>
    void CSPRepeatingPermutation<T>::setArr(T* arr) {
        this->arr = arr;
    }
    template<typename T>
    void CSPRepeatingPermutation<T>::setN(int n) {
        this->n = n;
    }
    template<typename T>
    void CSPRepeatingPermutation<T>::setSlot(int slot) {
        this->slot = slot;
    }


    template<typename T>
    bool CSPRepeatingPermutation<T>::AllFactors(T* check, int numOfElement) {
        for(int i = 0; i < this->allFactorsFuncAddress->size(); i++) {
            bool valid = (*this->allFactorsFuncAddress)[i](check, numOfElement);

            if(!valid) {
                return false;
            }
        }
        return true;
    }
}