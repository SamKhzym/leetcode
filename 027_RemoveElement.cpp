#include "LeetcodeHelpers.h"

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int numGoodVals = 0;
        int numBadVals = 0;

        for (int i = 0; i + numBadVals < nums.size();) {
            if (nums[i] == val) {
                nums[i] = nums[nums.size() - 1 - numBadVals];
                numBadVals++;
            }
            else {
                numGoodVals++;
                i++;
            }
        }

        return numGoodVals;

    }
};

MAIN {
    vector<int> v({0,1,2,2,3,0,4,2});

    Solution s;
    s.removeElement(v, 2);

    printVector(v);
}