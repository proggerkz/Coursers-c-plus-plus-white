#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool contains(vector<string> words, string w){
	for (auto s : words){
		if (s == w){
			return true;
		}
	}
	return false;
}
int main(){
	cout << contains({"air", "water", "fire"}, "fire");
	return 0;
}