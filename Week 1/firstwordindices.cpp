#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
	string a = "dsad";

	for (int i = 0; i < a.size(); i++){
		if(a[i] == 'a'){
			cout << i << endl;
			break;
		}
	}
	cout << "Yes";
	
	return 0;
}