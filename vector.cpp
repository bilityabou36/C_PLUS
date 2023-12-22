#include <iostream>
#include <vector>

using namespace std;

void printDatac(vector<int> data){
    for(int i = 0; i <data.size(); i++){
    cout << data[i];
    }

}

int main (){


vector<int> data = {1, 2,3}; // aka dynamic array
data[0]; // assesing the array or vector
cout  <<" the vallue o: " << data[3] <<endl;
printDatac(data);
data.push_back(100); // adding to the array
data.pop_back(); // remove it 
 return 0;
}