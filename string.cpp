#include <iostream>


using namespace std;

int main(){
  string street;
  cout <<"street: ";
  getline(cin, street);

  string state;
  cout <<"state: ";
  getline(cin, state);

  string zipcode;
  cout <<"zipcode";
  getline(cin, zipcode);

  cout << street <<endl
       << street <<"," << state  <<"," <<zipcode;

  
    return 0;
}