//week02-3.cpp 學習計畫 Basic第一題
//LeetCode 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(), N2 = word2.length();
        string ans; //用來放答案的字串
        for (int i=0; i < max(N1,N2); i++){ //(已長的為主)逐一檢查 插入
            if (i < N1) ans += word1[i]; //沒超過範圍, 就插入 word1[i]
            if (i < N2) ans += word2[i]; //沒超過範圍, 就插入 word2[i]
        }
        return ans;
    }
};
