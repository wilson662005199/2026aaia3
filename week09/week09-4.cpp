//week09-4.cpp SOIT106_advance_009
#include <iostream>
using namespace std;

void f(int n){
	if (n==0) return;
	cout << n%10;
	f(n/10);
}
int main(){
	int a;
	cin >> a;
	f(a);
	cout << "\n";
}
