#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void Swap(int &x, int &y){
	int tmp = x;
	x = y;
	y = tmp;
}
int main(){
	int a = 1;
	int b = 2;
	Swap(a, b);
	cout << "a = " << a << endl;	
	cout << "b = " << b << endl;	
	return 0;
}