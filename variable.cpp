#include <iostream>

int main () {
    const double gravity = 9.8; // if you want somthing to remain constant
    int a = 4;
    int b = 3;
    int temp = a; // swaping a variable
    a = b;
    b = temp;

    std::cout << a;
    return 0;
}