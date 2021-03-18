#include <map>

using namespace std;

int main(){
    map<string, int> m = {{"one", 1}, {"two", 2}};
    for (const auto& item : m){
    	item.first, item.second;
    }
    return 0;
}