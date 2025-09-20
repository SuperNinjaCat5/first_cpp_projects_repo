#include <iostream>
#include <string>
#include <algorithm>

std::string to_binary(unsigned long long arg) {
    if (arg == 0) return "0";
    
    std::string binary;
    while (arg != 0) {
        int temp;
        temp = arg%2;
        arg/=2;
        binary+=(char)(temp+'0');
    }

    std::reverse(binary.begin(), binary.end());
    return binary;
}