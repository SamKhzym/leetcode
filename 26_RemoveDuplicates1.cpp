#include "LeetcodeHelpers.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int numUnique = 1;

        for (int i = 1; i < nums.size(); i++) {

            //unique consecutive entries
            if (nums[i] != nums[i-1]) {
                nums[numUnique] = nums[i];
                numUnique++;
            }

        }

        return numUnique;

    }
};

MAIN {

    Solution s;

    vector v({0,0,1,1,1,2,2,3,3,4});

    s.removeDuplicates(v);
    printVector(v);

}