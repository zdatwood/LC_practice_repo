/***************************************
Given an integer array nums sorted in non-decreasing order, return 
an array of the squares of each number sorted in non-decreasing order.


Constraints:
    1 <= nums.length <= 10^4
    -104 <= nums[i] <= 10^4
    nums is sorted in non-decreasing order.

****************************************/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> soln(nums.size());
        for(int i = 0; i < nums.size(); i++){
            soln[i] = nums[i] * nums[i];
        }
        sort(soln.begin(), soln.end());
        return(soln);
    }
};
