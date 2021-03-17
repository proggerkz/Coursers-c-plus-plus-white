#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main(){
	vector<int> nums = {1, 5, 2, 3, 5};
	int quantity = 0;
	for(auto x : nums)
		if(x == 5)
			quantity += 1;
	cout << "There are " << quantity << " fives";

	return 0;
}