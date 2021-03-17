#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
	string a = "asdfasdfasdf";

	for (int i = 0; i < a.size(); i++){
		if(a[i] == 'a'){
			cout << i << endl;
		}
	}
	
	return 0;
}