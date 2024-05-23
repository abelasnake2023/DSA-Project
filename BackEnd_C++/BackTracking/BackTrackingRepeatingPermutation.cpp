#include "BackTrackingRepeatingPermutation.h"


namespace BackTracking {
    template<typename T>
    ValidColl<T>::ValidColl(T* validColl, int size) {
        this->validColl = validColl;
        this->size = size;
    }

    template<typename T>
    T* ValidColl<T>::getValidColl() {
        return this->validColl;
    }
    template<typename T>
    int ValidColl<T>::getSize() {
        return this->size;
    }




    template<typename T>
    BackTrackingRepeatingPermutation<T>::~BackTrackingRepeatingPermutation() {
        this->delete2DArrayValidCollections();
    }
    template<typename T>
    BackTrackingRepeatingPermutation<T>::BackTrackingRepeatingPermutation() {

    }


    template<typename T>
    void BackTrackingRepeatingPermutation<T>::delete2DArrayValidCollections() {
        for(int i = 0; i < this->allValidColl.size(); i++) {
            auto validSingleColl = this->allValidColl[i]; // validSingleColl is pointer of array

            delete[] validSingleColl->getValidColl(); // return pointer of an array
            delete validSingleColl; // deleting the pointer to array
        }
    }
    template<typename T>
    std::vector<ValidColl<T>*>* BackTrackingRepeatingPermutation<T>::allValidCombination(bool disp) {
        this->delete2DArrayValidCollections();

        this->display = disp;

        T* possComb = new T[slot];
        int possCombIndex = 0;

        for(int i = 0; i < n; i++) {
            possComb[possCombIndex] = arr[i];
            possCombIndex++;

            // for backtracking algorithm with the concept of CSP
            if(!totalWeight(possComb, possCombIndex)) {
                possCombIndex--;
                continue;
            }

            subSetRepeatingPermutation(possComb, possCombIndex);
            possCombIndex--;
        }

        delete[] possComb;
        possComb = nullptr;

        return &this->allValidColl;
    }

    template<typename T>
    void BackTrackingRepeatingPermutation<T>::subSetRepeatingPermutation(T* possComb, int& possCombIndex) {
        combineWithAllArrEle(possComb, possCombIndex);
    }

    template<typename T>
    void BackTrackingRepeatingPermutation<T>::combineWithAllArrEle(T* possComb, int& possCombIndex) {
        for (int i = 0; i < n; i++) {
            if (possCombIndex == slot) {
                T* singleValidCollCopy = this->copy(possComb);
                auto singleValidColl = new ValidColl<T>(singleValidCollCopy, this->slot);
                this->allValidColl.push_back(singleValidColl);

                if(this->display) {
                    for (int j = 0; j < slot; j++) {
                        std::cout << possComb[j] << " ";
                    }
                    std::cout << std::endl;
                }

                return;
            }

            possComb[possCombIndex] = arr[i];
            possCombIndex++;

            // for backtracking algorithm with the concept of CSP
            if(!totalWeight(possComb, possCombIndex)) {
                possCombIndex--;
                continue;
            }

            subSetRepeatingPermutation(possComb, possCombIndex);
            possCombIndex--;
        }
    }

    template<typename T>
    T* BackTrackingRepeatingPermutation<T>::copy(T* possComb) {
        T* validComb = new T[this->slot];

        for(int i = 0; i < this->slot; i++) {
            validComb[i] = possComb[i];
        }

        return validComb;
    }
}