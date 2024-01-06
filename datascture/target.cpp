#include<string>
#include<vector>
#include<iostream>


bool isTarget(std::vector<int>&nums, int target){
    int left = 0;
    int right = nums.size()-1;
    while(left < right){
   
int current = nums[left] + nums[right];
if(current == target){
    return true;
} else if (current > target){
  right--;
} else {
    left++;
}

    }
return false;
}


int main(){
    std::vector<int> nums= {1,2,4, 8, 3};
    int target = 10;

    bool myTarget = isTarget(nums, target);
    std::cout <<"the target is corect" <<(target ? "yes" : "no") <<std:: endl;



}