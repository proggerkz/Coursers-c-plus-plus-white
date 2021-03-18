#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> Reversed(const 	vector<int> &v){
	vector<int> cur;
	for(int i = v.size() - 1; i >= 0; --i)
		cur.push_back(v[i]);
	return cur;
}
int main(){
	vector<int> v = {0, 1, 2};
 	v = Reversed(v);
 	cout << v[0];
	return 0;
}