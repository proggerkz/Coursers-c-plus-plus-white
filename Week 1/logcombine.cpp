#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

	string s = "abc";
	if(!s.empty() && s < "zzz")
		cout << s;
	return 0;

}