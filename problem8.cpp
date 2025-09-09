#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float diameter;
    cout << "Enter the diameter of the sphere: ";
    cin >> diameter;
    float radius = diameter / 2;
    float area = 4 * 3.14 * radius * radius;
    cout << "Area: " << area << endl;
    return 0;
}