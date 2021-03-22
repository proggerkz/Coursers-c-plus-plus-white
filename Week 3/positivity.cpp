#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string getPositivity(int x){
	if(x > 0) {
		return "positive";
	}
	else if(x < 0) {
			return "negative";
	}
	return  "zero";
}
void PrintPositivity(int x){
	string positivity = getPositivity(x);
	
	cout << x << " is " << positivity << endl;
}

int main(){
	PrintPositivity(2);
	PrintPositivity(0);
	PrintPositivity(-5);

	return 0;
}