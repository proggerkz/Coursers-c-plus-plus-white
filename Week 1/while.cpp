#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n >= 1){
		int sum = 0;
		while(n > 0){
			sum += n;
			--n;
		}
		cout << sum;
	}else{
		cout << "Please enter positive number";
	}
	return 0;

}