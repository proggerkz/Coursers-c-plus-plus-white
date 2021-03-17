#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;


int main(){
	vector<int> nums = {1, 5, 2, 3, 5};
	for(int c : nums)
		cout << c << ", ";

	return 0;
}