#include <limits>
#include <vector>
#include <iostream>

using namespace std;

int isPrime(int n){
 if(n < 2) {
    return false;
 }

 for(int i= 2; i<n; i++){
   if(n % i == 0){
    return false;
   }
 }

    return true;
}

int main(){

int n = -5;
bool answer = isPrime(n);
if(answer){
    cout << n << "  is prime number " <<endl;
} else {
    cout << n << "  is not prime " <<endl;
}
    return 0;
}