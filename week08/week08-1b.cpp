//week08-1b.cpp 學習計畫 Matrix 1
//LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        int M = accounts.size(), N = accounts[0].size();
        for (int i=0; i<M; i++){// 左手i 範圍M
            int now=0;//小迴圈前面 now =0
            for (int j=0; j<N; j++) { //右手j 範圍 N
                now += accounts[i][j];
            }
            if (now > ans) ans = now;
        }
        return ans;
    }
};
