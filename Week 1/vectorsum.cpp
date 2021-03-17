#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a = {1, 4, 6, 8, 10};
	
	int sum = 0;
	for (auto i : a){
		sum += i;
	}	
	cout << sum;
	return 0;
}