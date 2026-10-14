//week06-4.cpp 學習計畫 Simulation 第一題
//LeetCode 682. Baseball Game
// 5: array裡 5
// 2: array裡 5 2
// C: array裡 5(del 2)
// D: array裡 5 10 (最後的5 兩倍後加入)
// +: array裡 5 10 15 (最後兩數相加)
//ans = 所有數字相加
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string s : operations) {
            if (s == "C"){ //字串用"", 字母''
                a.pop_back();
            }else if (s =="D"){
                a.push_back(a[a.size()-1]*2);
            }else if (s =="+"){
                a.push_back( a[a.size()-2] + a[a.size()-1] );
            }else{//剩下就是單純放入數字
                a.push_back( stoi(s) );
                //法二：a.push_back(s.c_str() );
                //法三：
                //int now;
                //stringstream.ss(s);
                //ss >> now;
                //a.push_back(now);
            }
        }
        int ans = 0; //迴圈前面ans為0
        for(int num : a){
            ans += num; //ans慢慢加
        }
        return ans; //迴圈後面ans拿來用
    }
};
