#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	map<string, int> a;
	a["one"] = 1;
	map<string, int> b;
	if(a == b) 
		cout << "a is equal to b";
	else	
		cout << "a isn't equal to b";

}