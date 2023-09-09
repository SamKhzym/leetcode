#include "LeetcodeHelpers.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() < 2) { return nums.size(); }

        int realVectorPtr = 2;
        int badEntries = 0;

        int oldNMinus1 = nums[0], oldNMinus2 = nums[1];

        for (int i = 2; i < nums.size(); i++) {

            oldNMinus2 = oldNMinus1;
            oldNMinus1 = nums[i-1];

            //if unique consecutive entries OR two duplicate consecutive entries
            if (nums[i] != oldNMinus1 || (nums[i] == oldNMinus1 && nums[i] != oldNMinus2)) {
                //then set that element to real vector pointer and increment
                nums[realVectorPtr] = nums[i];
                realVectorPtr++;
            }
            else {
                badEntries++;
            }

        }

        return realVectorPtr;

    }
};

MAIN {

    Solution s;
    vector<int> nums({1,1,1,2,2,3});
    //vector<int> nums({0,0,1,1,1,1,2,3,3});

    s.removeDuplicates(nums);

    printVector(nums);

}