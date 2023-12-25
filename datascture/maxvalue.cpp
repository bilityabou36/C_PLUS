#include <iostream>
#include <vector>
#include <limits>

float maxValue(std::vector<float> numbers) {
    float maz = -std::numeric_limits<float>::infinity();
    for (auto num : numbers) {
        if (num > maz) {
            maz = num;
        }
    }
    return maz;
}

int main() {
    std::vector<float> numbers = {10, -1, 0, 0.222, 100};
    float maxVl = maxValue(numbers);
    std::cout << "The maximum value is: " << maxVl << std::endl;
    return 0;
}


