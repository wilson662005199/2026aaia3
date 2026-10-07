//week05-2.cpp 學習計畫Built-in Function 第二題
//LeetCode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i<s.length(); i++ ){
            s[i] = tolower(s[i]); //include <cctype>(內建)
        }
        return s;
    }
};
