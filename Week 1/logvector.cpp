#include <iostream>
#include <vector>
using namespace std;

int main(){
	// int a = 3;
	// int b = 5;
	// if(a < b) cout << "a less than b";
	vector<string> a = {"fire", "water"};
	vector<string> b = {"fire", "air"};
	if(a == b) 
		cout << "a is equal to b";
	else	
		cout << "a isn't equal to b";

}