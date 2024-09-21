#include <iostream>

using namespace std;

auto power = [](int a) -> int { return a * a; };
template <typename T> auto pow = [](T a) { return a * a; };

void print() {
  cout << power(10) << endl;
  cout << pow<int>(5) << endl;
}