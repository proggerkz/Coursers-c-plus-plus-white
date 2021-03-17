#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main(){
	int c = 5;
	int a = c++;
	int b = ++c;
	cout << a << endl;
	cout << b << endl;
	return 0;
}