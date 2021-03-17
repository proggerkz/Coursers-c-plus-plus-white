#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;


int main(){
	vector<string> nums = {"1", "5", "2", "3", "5"};
	for(auto c : nums)
		cout << c << ", ";

	return 0;
}