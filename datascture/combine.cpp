#include <vector>
#include <string>
#include <iostream>

std::vector<int>combine(std::vector<int>&arr1, std::vector<int>& arr2){
int i = 0;
int j = 0;
std::vector<int>ans;
while(i < arr1.size() & j < arr2.size() ){
    if(arr1[i] < arr2[j]){
      ans.push_back(arr1[i]);
      i++;
    } else {
        ans.push_back(arr2[i]);
        j++;
    }

    while (i < arr1.size()){
    ans.push_back(arr1[i]);
    i++;
    };

    while (j < arr2.size()){
        ans.push_back(arr2[i]);
        j++;
    }
    return ans;
}
}