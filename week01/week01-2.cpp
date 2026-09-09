//week01-2.cpp
#include <iostream>

int main(){
	int N;
	std::cin >> N; ///C++的標準輸入
	int b = N, ans = 0;
	while (N>0){
		ans = ans*10 + N%10;
		N = N / 10;
	}
	printf("%d+%d=%d\n", b, ans, ans+b);
	//std::cout << ans << b+ans; //wrong-answer
	//正確：std::cout << b << "+" << ans << "=" << b+ans << std::endl;
	//正確：std::cout << b << "+" << ans << "=" << b+ans << "\n";
}
