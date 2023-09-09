#include "LeetcodeHelpers.h"

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> solutionVector;
        // interesting thing i learned here, compiler doesn't optimize out the call to size if used in multiple places. 
        // doing this instead of calling size everywhere else speeds up solution by factor of 2!
        int n = nums.size(); 

        for (int i = 0; i < n; i++) {
            int idx = (n - (k % n) + i) % n;
            solutionVector.push_back(nums[idx]);
        }

        nums = solutionVector;

    }
};