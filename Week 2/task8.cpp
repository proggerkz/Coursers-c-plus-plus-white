#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	int sum = 0;
	for(int &x : v){
		cin >> x;
		sum += x;
	}
	sum /= n;
	vector<int> result;
	for(int i = 0; i < n; ++i){
		if(v[i] > sum)
			result.push_back(i);
	}
	cout << result.size() << endl;
	for(int &x : result)
		cout << x << ' ';

	return 0;
}