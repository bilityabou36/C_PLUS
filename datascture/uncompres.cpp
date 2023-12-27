#include <iostream>
#include <limits>
#include <vector>

std::string uncompress(std::string s) {
    int i = 0;
    int j = 0;
    std::string numbers = "0123456789";
    std::string result = "";

    while (j < s.length()) {
        if (numbers.find(s[j]) != std::string::npos) {
            j += 1;
        } else {
            int count = std::stoi(s.substr(i, j - i));
            for (int n = 0; n < count; n++) {
                result += s[j];
            }
            j += 1;
            i = j;
        }
    }
    return result;
}

int main() {
    std::string s = "12b3c";
    std::string out = uncompress(s);
    std::cout << "Your uncompressed string is: " << out << std::endl;

    return 0;
}
