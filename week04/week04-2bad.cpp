///week04-2bad.cpp 程式是對的但CodeBlocks出錯, warning : range-based for(太老了)
///需要改設定
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	int now;
	for(int i=0; i<20; i++){
		cin>>now;
		if(now==0)break;
		a.push_back(now);
	}
	int ans=0;
	cin>>now;
	for(int n : a){
		if(n==now) ans++;
	}
	printf("%d\n",ans);
}
