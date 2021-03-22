#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Print(const vector<int>& v){
	for (const auto& i : v){
		cout << i << ' ';
	}
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &i : a)
		cin >> i;
	sort(begin(a), end(a), [](int a, int b){
		return abs(a) < abs(b);
	});
	Print(a);

	return 0;
}