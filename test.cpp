#include <iostream>
using namespace std;

int multi(int a, int b){
  return a*b;
}

int main(void){
  int a, b, c;

  cin >> a >> b >> c;

  cout << diff(a, b) + c << endl;

  return 0;
}
