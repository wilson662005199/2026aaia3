///Setting --> compiler -->¤Ä²Ä¤G­ÓC++11 ISO
///week04-2good.cpp
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
