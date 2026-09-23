///week03-5.cpp 想要真的認識 vector<int> a

#include <iostream>
#include <vector>/// C++ array
using namespace std;

int main(){
    vector<int> a; ///宣告 伸縮自如的array
    a.push_back(99);
    a.push_back(98);
    a.push_back(97);
    for (int i=0; i < a.size(); i++) cout << a[i] << " ";
    cout << "\n";

    a.push_back(88);
    a.push_back(77);
    for (int i=0; i < a.size(); i++) cout << a[i] << " ";
    cout << "\n";
}
