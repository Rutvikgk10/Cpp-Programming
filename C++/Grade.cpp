#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score (0-100): ";
    cin >> score;

    if (score >= 80 && score <= 100) {
        cout << "Grade A" << endl;
    } else if (score >= 60 && score < 80) {
        cout << "Grade B" << endl;
    } else if (score >= 40 && score < 60) {
        cout << "Grade C" << endl;
    } else if (score >= 30 && score < 40) {
        cout << "Grade D" << endl;
    } else if (score >= 0 && score < 30) {
        cout << "Grade F" << endl;
    } else {
        cout << "Invalid score. Please enter a value between 0 and 100." << endl;
    }

    return 0;
}
