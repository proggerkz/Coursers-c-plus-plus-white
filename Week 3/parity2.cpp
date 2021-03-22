#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void PrintParity(int x){
	string parity = x % 2 == 0 ? "even" : "odd";
	cout << x << " is " << parity << endl;
}

int main(){
	PrintParity(5);
	PrintParity(4);

	return 0;
}