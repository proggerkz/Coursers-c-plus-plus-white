#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = count(begin(s), end(s), 'f');
	if(cnt == 0){
		cout << -2;
	}else if(cnt == 1){
		cout << -1;
	}else{
		cnt = 0;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == 'f')
				cnt++;
			if(cnt == 2){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}	