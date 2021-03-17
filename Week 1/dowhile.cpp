#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a = 5;
	int b;
	do{
		cout << "Guess the number: ";
		cin >> b;
	} while(a != b);
	cout << "You are right!";
	return 0;


}