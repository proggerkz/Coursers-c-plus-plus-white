#include <iostream>
#include <vector>
#include <string>
using namespace std;
int Factorial(int n){
	int result = 1;
	for(int i = 1; i <= n; ++i){
		result = result * i;
	}
	return result;
}
int main(){
	int n;
	cin >> n;
	cout << Factorial(n);
	return 0;
}