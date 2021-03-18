#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>
using namespace std;
int main(){
	const string s = "hello";
	cout << s.size() << endl;
	// s += ", world";
	string t = s + "!";
	cout << s;

	return 0;
}