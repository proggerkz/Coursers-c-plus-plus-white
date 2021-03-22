#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
 	first_name_year[year] = first_name;
  }
  void ChangeLastName(int year, const string& last_name) {
  	last_name_year[year] = last_name;
  }
  string GetFullName(int year) {
  	string first_name = "", last_name = "";
  	for(const auto& item : first_name_year){
  		if(item.first <= year){
  			first_name = item.second;
  		}
  	}
  	for(const auto& item : last_name_year){
  		if(item.first <= year){
  			last_name = item.second;
  		}
  	}

  	if(first_name != ""){
  		if(last_name != ""){
  			return first_name + " " + last_name;
  		}else{
  			return first_name + " with unknown last name"; 
  		}
  	}else if(last_name != ""){
  		return last_name + " with unknown first name";
  	}
  	else{
  		return "Incognito";
  	}
  }
  string GetConverted(const vector<string>& v){
  	string s = v[v.size() - 1];
	string res;
	for(int i = v.size() - 2; i >= 0; --i){
		if(v[i] != v[i + 1]){
			if(res.empty())
				res = v[i];
			else 
				res += ", " + v[i];
		}
	}
	return s + (res.empty() ? "" : " (" + res + ")");
  }
  string GetFullNameWithHistory(int year) {
  	vector<string> first_names, last_names;
  	for(const auto& item : first_name_year){
  		if(item.first <= year){
  			first_names.push_back(item.second);
  		}
  	}
  	for(const auto& item : last_name_year){
  		if(item.first <= year){
  			last_names.push_back(item.second);
  		}
  	}

  	if(!first_names.empty()){
  		if(!last_names.empty()){
  			return GetConverted(first_names) + " " + GetConverted(last_names);
  		}else{
  			return GetConverted(first_names) + " with unknown last name"; 
  		}
  	}else if(!last_names.empty()){
  		return GetConverted(last_names) + " with unknown first name";
  	}
  	else{
  		return "Incognito";
  	}
  }
private:
	map<int, string> first_name_year, last_name_year;
};
int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1990, "Polina");
  person.ChangeLastName(1990, "Volkova-Sergeeva");
  cout << person.GetFullNameWithHistory(1990) << endl;
  
  person.ChangeFirstName(1966, "Pauline");
  cout << person.GetFullNameWithHistory(1966) << endl;
  
  person.ChangeLastName(1960, "Sergeeva");
  for (int year : {1960, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1961, "Ivanova");
  cout << person.GetFullNameWithHistory(1967) << endl;
  
  return 0;
}
