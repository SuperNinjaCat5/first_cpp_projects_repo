#include <iostream>
#include <string>
#include <algorithm>
#include "convert_func.h"

using std::string;
using std::cout;
using std::cin;

string convertToASCII(string s)
{
    string binary;
    cout << "Converting \"" << s << "\" to binary:\n";
    for (int i = 0; i < s.length(); i++)
    {
        int ascii_val = (int)s[i];
        string bin_val = to_binary(ascii_val);
        cout << "'" << s[i] << "' (ASCII " << ascii_val << ") = " << bin_val << "\n";
        binary += bin_val; 
    }
    return binary;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    string binary = convertToASCII(s);
    cout << binary;

}

// void main() {
//     string arg;
//     cout << "Give a value:\n> ";
//     cin >> arg;

//     cout << "[USER] Gave: " << arg << "\n";

//     unsigned long long ascii = convertToASCII(arg);

//     std::string binary;
//     while (ascii != 0) {
//         int temp;
//         temp = ascii%2;
//         ascii/=2;
//         binary+=(char)(temp+'0');
        
//         std::cout << "\x1b[34m[MAKING BINARY]\033[1;34m " << temp << "\033[0m\n";

//     }

//     std::reverse(binary.begin(), binary.end());

//     std::cout << "\033[1;32m[FOUND BINARY] " << binary << "\033[0m\n";

//     return 0;
// }