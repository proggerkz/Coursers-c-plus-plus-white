#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void PrintMap(const map<string, int>& m){
	cout << "Size = " << m.size() << endl;
	for (const auto& item : m){
		cout << item.first << " " << item.second << endl;
	}
}
int main(){
	map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
	PrintMap(m);
	m.erase("three");
	PrintMap(m);

	return 0;
}