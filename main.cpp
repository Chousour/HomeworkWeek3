#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Hello!\n\tWhat is your name?.\n ";
    std::cin >> name;
    std::cout << "\a\t Hello " << "\"" << name << "\"";
}
