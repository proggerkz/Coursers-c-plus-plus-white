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
bool Gt2(int x){
	if(x > 2){
		return true;
	}
	return false;
}
bool Lt2(int x){
	if(x < 2){
		return true;
	}
	return false;
}
int main(){
	vector<int> v = {
		1, 3, 2, 5, 4
	};
	cout << count_if(begin(v), end(v), Gt2) << endl;
	cout << count_if(begin(v), end(v), Lt2);
	return 0;
}