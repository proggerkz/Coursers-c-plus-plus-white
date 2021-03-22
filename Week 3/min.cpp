#include <iostream>

using namespace std;

int Min(int a, int b){
	if(a < b) return a;
	return b;
}
int Max(int a, int b){
	if(a > b) return a;
	return b;
}
int main(){
	cout << Min(2, 3) << endl;
	cout << Max(2, 3);
	return 0;
}