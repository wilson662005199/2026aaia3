//week03-2.cpp學習計畫 Basic第六題
//LeetCode 283. Move Zeroes
//
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for (int num : nums){
            if (num != 0){
                nums[k] = num;
                k++;
            }
        }
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
