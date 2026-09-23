//week03-1.cpp 學習計畫 Basic 第八題
//Leetcode 1822. Sign of the Product of an Array


class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N = nums.size(); //array size
        int neg = 0; //負數數量
        for (int num : nums){
            if (num==0) return 0;
            if (num<0) neg++;
        }
        if (neg % 2 == 0) return 1;
        return -1;






        //int N = nums.size(); //array的大小
        //int ans = 1;    //迴圈前面 ans 是 1 方便繼續乘
        //for (int i=0; i<N ;i++){ //迴圈
         //   ans = ans * nums[i];
        //}
        //if (ans>0) return 1;
        //if (ans<0) return -1;
        //return 0;
    }
};
