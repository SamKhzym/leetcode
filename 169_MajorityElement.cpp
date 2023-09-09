#include "LeetcodeHelpers.h"

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int majElement = 0, majNum = 0;
        unordered_map<int, int> elements;

        for (int i = 0; i < nums.size(); i++) { 
            if (elements.find(nums[i]) == elements.end()) { elements[nums[i]] = 1; } 
            else { elements[nums[i]] += 1; }

            if (elements.at(nums[i]) > majNum) { majElement = nums[i]; majNum = elements.at(nums[i]); }

        }

        return majElement;

    }
};

MAIN {

    Solution s;
    cout << s.majorityElement(*(new vector<int>({2,2,1,1,1,2,2}))) << endl;

}