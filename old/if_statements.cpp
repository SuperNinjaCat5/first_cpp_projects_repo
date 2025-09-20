#include <iostream>

// What is the tutorial guy on, why am i coding a bouncer lol

int main() {
    int age;

    std::cout << "Enter you age: ";
    std::cin >> age;

    if (age >= 18 & age <= 100) {
        std::cout << "Welcome";
    }
    else if (age <= 0) {
        std::cout << "u not alive";
    }
    else {
        std::cout << "Cant let u in. Gotta be 18-100 yrs old";
    }

    return 0;
}