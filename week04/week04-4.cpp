//week04-4.cpp學習計畫Basic 第七題
//LeetCode 66. Plus One +1

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();//有幾位數
        int carry = 1; //在最右邊+1
        for (int i=N-1; i>=0; i--){
            int now = digits[i] + carry;
            carry = now / 10; //進位
            digits[i] = now % 10; //個位

        }
        //離開迴圈, 居然還有carry要進位
        if (carry>0) digits.insert(digits.begin(), carry);
        return digits;
    }
};
