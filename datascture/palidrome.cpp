#include <string>
#include <iostream>
#include <vector>


bool isPalindrom(std::vector<int>&nums){
int left = 0;
int right = nums.size()-1;

while(left < right){
if(nums[left] != nums[right]){
return false;
}
left++;
 right--;
}
return true;
}

int main(){
    std::vector<int> nums = {1,0,0,1};
    bool  isPali = isPalindrom(nums);
    std::cout <<"is this palidrome " <<(isPali ? "yes" : "no"  ) <<std:: endl;
}