#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Number " << num1 << " is the Largest" << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "Number " << num2 << " is the Largest" << endl;
    } else {
        cout << "Number " << num3 << " is the Largest" << endl;
    }

    return 0;
}
