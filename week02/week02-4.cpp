//week02-4.cpp 學習計畫 Basic第一題
//LeetCode: 389. Find the Difference
//兩個字串, 打亂後多了一個
//整理左邊 再讓右邊多的用掉, 不夠用時 找到答案。
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {}; //用array, 統計左邊s的字母, 大括號{} 代表都是0
        for (char c:s) { //C++進階 for 迴圈,可把字母 一個一個取出
            H[c - 'a'] += 1; //用掉一個字母
        }
        for (char c : t){
            H[c - 'a'] -=1;
            if (H[c - 'a'] <0 )return c; //找到答案
        }
        return 0;
    }
};
