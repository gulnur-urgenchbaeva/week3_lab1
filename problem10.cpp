#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float distance;
    float fuel_efficiency;
    float price;
    cout << "Enter the distance: ";
    cin >> distance;
    cout << "Enter the fuel efficiency: ";
    cin >> fuel_efficiency;
    cout << "Enter the price: ";
    cin >> price;
    float cost = (distance / fuel_efficiency) * price;
    cout << "The cost of driving is " << cost << endl;
    return 0;
}