#include <iostream>
#include <fstream>

using namespace std;
int main (){
ofstream file ("hello.txt");
file <<"this is pretty cool";

file.close();
    return 0;
}



reading from file
int main(){
    fstream file ("hello.text");
    vector<string> names;

    sting input;

    while(file >> input){
        name.push_back(input);
    }
    for (name : names){
        std::cout << name << std::endl;
    }
}


// 

fstream file ("hello.txt");
string line
getline(file, line)
cout << file, line

