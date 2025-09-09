#include <iostream>
using namespace std;

int main() {
    int intNumber = 20;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';
    cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << std::endl;
    cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) << std::endl;
    cout << "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) << std::endl;
    cout << "Value of Boolean is " << boolean << ". Size is " << sizeof(boolean) << std::endl;
    cout << "Value of CharName is " << charName << ". Size is " << sizeof(charName) << std::endl;
}