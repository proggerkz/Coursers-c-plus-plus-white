
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void PrintSet(const set<string> &s){
	cout << "Size = " << s.size() << endl;
	for (auto x : s){
		cout << x << endl;
	}
}
int main(){
	vector<string> v = {"a", "b", "a"};
	set<string> s(begin(v), end(v));
	PrintSet(s);
    return 0;
}