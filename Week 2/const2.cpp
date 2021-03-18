#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>
using namespace std;
int main(){
	const vector<string> w = {"hello"};
	w.push_back("");
	// w[0][0] = 'H';
	cout << w[0];

	return 0;
}