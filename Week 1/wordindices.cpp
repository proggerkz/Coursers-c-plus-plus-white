#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
	string a = "asdfasdfasdf";

	int i = 0;
	for(auto c : a){
		if(c == 'a'){
			cout << i << endl;
		}
		++i;
	}
	
	return 0;
}