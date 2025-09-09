#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float x;
    float y;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a number: ";
    cin >> y;
    float t = (3*((x*x)+3))/((y/4)+3);
    cout << "t=" << t << endl;

    return 0;
}