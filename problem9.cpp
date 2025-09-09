#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float v0;
    float v1;
    float t;
    cout << "Enter v0: ";
    cin >> v0;
    cout << "Enter v1: ";
    cin >> v1;
    cout << "Enter t: ";
    cin >> t;
    float a = (v1-v0)/t;
    cout << a << endl;
    return 0;
}