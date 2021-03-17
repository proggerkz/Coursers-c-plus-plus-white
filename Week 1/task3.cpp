#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double disq = b * b - 4 * a * c;
	if(a == 0){
		if(b == 0)
			;
		else
			cout << -c / b;
	}else{
		if(disq == 0)
			cout << -b / 2 / a;
		else if(disq > 0){
			cout << (-b + sqrt(disq)) / (2 * a) << ' ' << (-b - sqrt(disq)) / (2 * a);
		}
	}
	return 0;

}