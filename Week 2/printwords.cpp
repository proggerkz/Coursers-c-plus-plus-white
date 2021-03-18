#include <iostream>
#include <vector>
#include <string>
using namespace std;
void changeInt(int x){
	x = 42;
}
int main(){
	int a = 5;
	changeInt(a);
	cout << a;
	return 0;
}