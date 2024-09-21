#include <iostream>

using namespace std;

void greet(const string &name) { cout << "Hello " << name << endl; }
void greet(const string &title, const string &name) {
  cout << "Hello " << title << " " << name << endl;
}
int main() {
  cout << "Hello From CMake" << endl;
  greet("Demis");
  greet("Mr.", "Demis");
  return 0;
}