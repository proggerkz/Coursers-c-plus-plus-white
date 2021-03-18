#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> v;
	int result = 0;
	for(int i = 0; i < n; ++i){
		string s;
		cin >> s;
		if(s == "WORRY_COUNT"){
			cout << result << endl;
		}else {
			int x;
			cin >> x;
			if(s == "WORRY"){
					v[x] = 1;
					result++;
			}
			if(s == "QUIET"){
					v[x] = 0;
					result--;
			}
			if(s == "COME"){
				if(x > 0){
					while(x > 0){
						v.push_back(0);
						x -= 1;
					}
				}else{
					x = -x;
					while(x > 0){
						if(v.back() == 1){
							result -= 1;
						}
						v.pop_back();
						x--;
					}
				}
			}
		}
	}

	return 0;
}