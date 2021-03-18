#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> Sort(vector<int> v){
	sort(begin(v), end(v));
	return v;
}
int main(){
	vector<int> nums = {3, 6, 1, 2, 0, 2};
	nums = Sort(nums);
	for(auto x : nums){
		cout << x << " ";
	}
	return 0;
}