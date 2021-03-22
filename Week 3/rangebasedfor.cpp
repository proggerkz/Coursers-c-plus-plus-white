#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Print(const vector<int>& v, const string& title){
	cout << title << ": ";
	for (const auto& i : v){
		cout << i << ' ';
	}
	cout << endl;
}
int main(){
	vector<int> v = {
		1, 3, 2, 5, 4
	};
	Print(v, "init");
	for(auto& i : v){
		++i;
	}
	Print(v, "inc ");
	return 0;
}