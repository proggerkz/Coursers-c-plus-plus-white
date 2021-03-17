#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main(){
	// int x = 5;
	// x = 6;
	// cout << x;
	string s = "hello";
	string t = s;
	t += ", world";
	s = "Holiday";
	cout << "s = " << s << endl;
	cout << "t = " << t << endl;
	return 0;
}