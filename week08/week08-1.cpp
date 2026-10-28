//week08-1.cpp 學習計畫 Matrix 1
//LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (vector<int> a : accounts){ //大資料結構(Matrix), 取出 中資料結構(array)
            int now = 0;
            for (int num : a){ //中資料結構(矩陣) 取出小資料結構(int)
                now += num;
            }
            ans = max(ans, now);
        }
        return ans;
    }
};
