#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> res;
	while(N > 0){
		res.push_back(N % 2);
		N /= 2;
	}
	for(int i = res.size() - 1; i >= 0; --i){
		cout << res[i];
	}
	return 0;
}	