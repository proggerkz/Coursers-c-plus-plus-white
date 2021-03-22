#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Print(const vector<string>& v){
	for (const auto& i : v){
		cout << i << ' ';
	}
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	vector<string> a(n);
	for(auto &i : a)
		cin >> i;
	sort(begin(a), end(a), [](string a, string b){
		for(char &c : a)
			c = tolower(c);
		for(char &c : b)
			c = tolower(c);
		return a < b;
	});

	Print(a);

	return 0;	
}