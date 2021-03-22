#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Print(const vector<int>& v, const string& title){
	cout << title << ": ";
	for (auto i : v){
		cout << i << ' ';
	}
	cout << endl;
}
int main(){
	vector<int> v = {
		1, 3, 2, 5, 4
	};
	int cnt = 0;
	for (auto i : v){
		if(i == -1){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}