#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main(){
	vector<int> nums = {1, 5, 2, 3, 5};
	sort(begin(nums), end(nums));
	for(auto x : nums)
		cout << x << " ";

	return 0;
}