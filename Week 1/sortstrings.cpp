#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main(){
	vector<string> nums = {"hello", "word", "milk"};
	sort(begin(nums), end(nums));
	for(auto x : nums)
		cout << x << " ";

	return 0;
}