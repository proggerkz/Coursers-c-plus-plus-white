#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
	map<string, int> name_to_value;
	name_to_value["one"] = 1;
	name_to_value["two"] = 2;

	cout << "two is " << name_to_value["two"];
	return 0;
}