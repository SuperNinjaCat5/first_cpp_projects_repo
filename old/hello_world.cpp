#include<iostream>

int main() {
    std::string name;
    int age;

    std::cout << "What is your name?\n> ";
    std::cin >> name;

    std::cout << "What is your age?\n> ";
    std::cin >> age;


    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}