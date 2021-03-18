#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void PrintMap(const map<int, string>& m){
	cout << "Size = " << m.size() << endl;
	for (auto item : m){
		cout << item.first << " " << item.second << endl;
	}
}
void PrintReverseMap(const map<string, int>& m){
	cout << "Size = " << m.size() << endl;
	for (auto item : m){
		cout << item.first << " " << item.second << endl;
	}
}

map<string, int> BuildReverseMap(const map<int, string> & m){
	map<string, int> result;
	for (auto item : m){
		result[item.second] = item.first;
	}
	return result;
}
int main(){
	map<int, string> events;
	events[1950] = "Bjarne Stroustrup's birth";
	events[1941] = "Dennis Ritchie's birth";	
	events[1970] = "UNIX epoch start";	
	PrintMap(events);
	events.erase(1970);
	PrintReverseMap(BuildReverseMap(events));



	return 0;
}