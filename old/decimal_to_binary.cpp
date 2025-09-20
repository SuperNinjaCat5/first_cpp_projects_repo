#include <iostream>
#include <string>
#include <algorithm>

int main() {
    unsigned long long arg;
    std::cout << "Give a value:\n> ";
    std::cin >> arg;

    std::cout << "[USER] Gave: " << arg << "\n";

    std::string binary;
    while (arg != 0) {
        int temp;
        temp = arg%2;
        arg/=2;
        binary+=(char)(temp+'0');
        
        std::cout << "\x1b[34m[MAKING BINARY]\033[1;34m " << temp << "\033[0m\n";

    }

    std::reverse(binary.begin(), binary.end());

    std::cout << "\033[1;32m[FOUND BINARY] " << binary << "\033[0m\n";

    return 0;
}

// std::string to_binary(unsigned long long arg) {
//     std::cout << "[USER] Gave: " << arg << "\n";

//     std::string binary;
//     while (arg != 0) {
//         int temp;
//         temp = arg%2;
//         arg/=2;
//         binary+=(char)(temp+'0');
        
//         std::cout << "\x1b[34m[MAKING BINARY]\033[1;34m " << temp << "\033[0m\n";

//     }

//     std::reverse(binary.begin(), binary.end());

//     std::cout << "\033[1;32m[FOUND BINARY] " << binary << "\033[0m\n";

//     return binary;
// }

// int main() {
//     return 0;
// }