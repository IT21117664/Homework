#include <iostream>
using namespace std;

int main(){
  int total;
  float discount = 0;

  cout << "Enter Total bill : ";
  cin >> total;
  if (total > 10000){
    discount = total * 0.25;
  }else if (total > 5000){
    discount = total * 0.15;
  }else if (total > 3000){
    discount = total * 0.10;
  }

  cout << "Final Total is " << total - discount << endl;
}