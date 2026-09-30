//week04-3.cpp 學習計畫Basic 第十題
//Leet code 896. Monotonic Array
//只增加
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int red =0, green = 0; //紅色 = up ; green = down
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i] < nums[i+1]) red++;
            if (nums[i] > nums[i+1]) green++;
        }
        if (red==0 || green==0) return true;
        return false;
    }
};
