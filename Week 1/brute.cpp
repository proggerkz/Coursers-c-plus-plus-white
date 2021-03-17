#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;


int main(){
	string s = "abcdefg";
	for(char c : s){
		cout << c << ", ";
	}

	return 0;
}