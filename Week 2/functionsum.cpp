#include <iostream>

using namespace std;

int Sum(int x, int y){
	return x + y;
}
int main(){
	int x, y;
	cin >> x >> y;
	cout << Sum(x, y);
	return 0;
}