#ifndef COURSESCHEDULIZERBACKEND_CSPREPEATINGPERMUTATION_H
#define COURSESCHEDULIZERBACKEND_CSPREPEATINGPERMUTATION_H


#include "BackTrackingRepeatingPermutation.h"
#include <vector>


namespace csp {

    template<typename T>
    class CSPRepeatingPermutation : public BackTracking::BackTrackingRepeatingPermutation<T> {
    private:
        std::vector<bool (*)(T*, int)>* allFactorsFuncAddress;

    public:
        ~CSPRepeatingPermutation();
        CSPRepeatingPermutation(T* collection, int n, int slot, std::vector<bool (*)(T*, int)>* allFactorsFuncAddress);


        bool totalWeight(T* check, int numOfElement) override;
        void setArr(T* arr) override;
        void setN(int n) override;
        void setSlot(int slot) override;


        bool AllFactors(T* check, int numOfElement);
    };

}


#include "CSPRepeatingPermutation.cpp"
#endif