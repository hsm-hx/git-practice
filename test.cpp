#include <iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

int main(void){
  int a, b, c;

  cin >> a >> b >> c;

  cout << add(a, b) + c << endl;

  return 0;
}
