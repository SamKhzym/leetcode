#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int mPtr = 0, nPtr = 0; 
        vector<int> solutionVector;

        //iterate m+n times to iterate through all numbers in the merged list
        for (int i = 0; i < m+n; i++) {

            //if reached the end of the second list, 
            //or nums1 is less than or equal to nums2
            //add the element from nums1 and continue
            if ((nPtr == n || nums1[mPtr] <= nums2[nPtr]) && mPtr < m) { 
                solutionVector.push_back(nums1[mPtr]); 
                mPtr++; 
            }
            //otherwise add the element from nums2
            else { 
                solutionVector.push_back(nums2[nPtr]);
                nPtr++;
            }

        }

        nums1 = solutionVector;

    }
};

int main(int c, char** v) {

    vector<int> nums1({1,2,3,0,0,0});
    vector<int> nums2({2,5,6});

    Solution s;
    s.merge(nums1, 3, nums2, 3);

}