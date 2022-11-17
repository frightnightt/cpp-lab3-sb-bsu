#include <iostream>
#include <limits>
using namespace std;

int main() {
  int k, i=1, sum_k=0, number;
  cout << "enter the amount of integers to sum = "; 
  cin >> k;
  do {
  if (k>0) {
    cout << "enter integer nr " << i << ": ";
    cin >> number;
    if(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "you've entered wrong input, try again" << endl;
      continue;
    }
    sum_k += number; i++;
  }
  }while (i<=k);
  cout << "the total sum of " << k << " integers is:" << sum_k;
  return 0;
}

