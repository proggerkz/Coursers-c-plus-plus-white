#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
	int n = 5;
	int sum = 0;
	int i = 1;
	while(i <= 5){
		sum += i;
		i += 1;
	}
	cout << sum;
	return 0;
}