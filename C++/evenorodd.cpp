#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Number to Find Even or Odd: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Your Number " << number << " is Even" << endl;
    } else {
        cout << "Your Number " << number << " is Odd" << endl;
    }

    return 0;
}
