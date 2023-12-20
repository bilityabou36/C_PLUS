#include <iostream>

int main () {
using namespace std;
int fahreinheit;
cout <<"Please type the degree in fahreinheit: ";
cin >> fahreinheit;

double celsius = (fahreinheit - 32) /1.8;

cout << celsius;
    return 0;
}