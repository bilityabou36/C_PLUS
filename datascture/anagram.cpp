#include <iostream>
#include <unordered_map>


std::unordered_map<char, int> charaterCoun(::std::string s){
    std::unordered_map<char, int> count;
    for(char ch : s){
        count[ch]+= 1;
    }
    return count;
}

bool isAnagram(std::string s1, ::std::string s2){
 return charaterCoun(s1) == charaterCoun(s2);
}

int main(){
    std:: string s1 = "bat";
    std:: string s2 = "toc";
    bool agram = isAnagram(s1,s2);
    if(agram){
       std:: cout <<"the string is anamgram " << s1 << " " << s2 << std::endl;
    }  else {
        std:: cout <<"the string is not anagram " <<s1 <<" " << s2 <<std::endl;
    }

    return 0;
}