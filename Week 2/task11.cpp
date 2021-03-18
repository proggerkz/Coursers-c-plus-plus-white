#include <map>
#include <iostream>
using namespace std;

map<char, int> BuildCharCounters(const string& s){
	map<char, int> result;
	for(const char& c : s){
		++result[c];
	}
	return result;
}
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		string a, b;
		cin >> a >> b;
		if(BuildCharCounters(a) == BuildCharCounters(b)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
    return 0;
}