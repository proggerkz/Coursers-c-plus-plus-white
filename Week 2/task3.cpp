#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> PalindromFilter(vector<string> words, int minLength){
	vector<string> result;
	for(auto w : words){
		if(w.size() >= minLength){
			bool ok = true;
			for(int i = 0; i < w.size() / 2; ++i){
				if(w[i] != w[w.size() - 1 - i]){
					ok = false;
					break;
				}
			}
			if(ok == true) {
				result.push_back(w);
			}
		}
	}
	return result;
}
int main(){
	// PalindromFilter({"abacaba", "aba"}, 5);
	return 0;
}