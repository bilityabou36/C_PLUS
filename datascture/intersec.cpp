#include <vector>
#include <iostream>
#include <unordered_set>

std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
    /*
    Create an empty set.
    Iterate through the first vector and insert its elements into the set.
    Create an empty vector to store the result.
    Iterate through the second vector and check if each element exists in the set.
    If it does, add it to the result vector.
    */
    std::unordered_set<int> setA;
    for (int el : a) {
        setA.insert(el);
    }
    std::vector<int> result;
    for (int el : b) {
        if (setA.count(el) > 0) {
            result.push_back(el);
        }
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 4, 6, 10, 8};
    std::vector<int> b = {8, 10, 12, 15};
    std::vector<int> common = intersection(a, b);

    // Print the common elements
    for (int el : common) {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    return 0;
}
