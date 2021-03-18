#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;
struct Person
{
	string name;
	string surname;
	int age;
};
vector<Person> getMoscowPopulation();

void PrintPopulatonSize(const vector<Person> &p){
	cout << "There are " << p.size() << 
	" people in Moscow" << endl; 
}

int main(){
	auto start = steady_clock::now();
	auto finish = steady_clock::now();
	PrintPopulatonSize(getMoscowPopulation());	

	return 0;
}