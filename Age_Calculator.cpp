#include <iostream>
using namespace std;
int main() {
   
    int age;
    cout << "enter your age\n";
    cin >> age;
    cout << "Your age in Months : " << age * 12 << " M\n";
    cout << "Your age in Days : " << age * 12 *30 << " D\n";
    cout << "Your age in Hours : " << age * 12 *30*24  << " H\n";


    return 0;
}