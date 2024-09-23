#include <iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter a number: " << endl;
  cin >> number;
  for(int j = 0; j < number; j++){
    for(int i = 0; i < j; i++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
