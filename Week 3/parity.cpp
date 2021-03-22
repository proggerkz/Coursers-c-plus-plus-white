#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void PrintParity(int x){
	string parity;
	if(x % 2 == 0){
		parity = "even";
	}else{
		parity = "odd";
	}
	cout << x << " is " << parity << endl;
}

int main(){
	PrintParity(5);

	return 0;
}