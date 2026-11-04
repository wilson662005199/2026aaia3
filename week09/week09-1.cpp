//week09-1.cpp 學習計畫 Matrix 第二題
// 兩條對角線數字都加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans =0;
        //方法1
        for (int i=0; i<N; i++){
            ans += mat[i][i];
        }
        for (int i=0; i<N; i++){
            ans += mat[N-1-i][i];
        }
        if (N%2==1) ans -= mat[N/2][N/2];
        return ans;
    }
};
