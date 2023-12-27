#include <iostream>
#include <vector>
#include <limits>

std::string compress(std::string s){
    int i = 0;
    int j = 0;
    std::string result;

    while (j < s.length()){
        if(s[i] == s[j]){
            j+=1;
        } else {
            int count = j - i;

            if(count > 1){
                result+= std::to_string(count) + s[i];

            } else {
                result += s[i];
            }
            i = j;

        }
    }
 return result;
}
