#include <vector>
#include <limits>

std::vector<int> fiveSort(std::vector<int> numbers){
int i = 0;
int j = numbers.size()- 1;

while(i < j){
    if(numbers[j] == 5){
      j -= 1;
    } else if (numbers[i] != 5){
        j += 1;
    } else {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;


    }
}

    return numbers;
}