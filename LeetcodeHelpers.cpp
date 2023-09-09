#include "LeetcodeHelpers.h"

template <class T>
void printVector(const vector<T>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); i++) {
        if (i < vec.size() - 1) { cout << vec[i] << ", "; }
        else { cout << vec[i] << "]" << endl; }
    }
}

// Explicit instantiation for vector<int>
template void printVector(const vector<int>& vec);