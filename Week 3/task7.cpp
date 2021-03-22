#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Incognizable
{
  public:
    Incognizable(){
      x = 0;
      y = 0;
    }
    Incognizable(const int& new_x){
      x = new_x;
    }
    Incognizable(const int& new_x, const int& new_y){
      x = new_x;
      y = new_y;
    }
  private:
    int x, y;
};

int main() {
  Incognizable a;
  Incognizable b = {};
  Incognizable c = {0};
  Incognizable d = {0, 1};
  return 0;
}