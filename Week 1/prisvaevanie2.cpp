#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main(){
	vector<string> w = {"a", "b", "c"};
	vector<string> v;

	v = w;
	v[0] = "d";
	cout << w[0] << ' ' << w[1] << ' ' << w[2] << '\n';
	cout << v[0] << ' ' << v[1] << ' ' << v[2] << '\n';
	return 0;
}