#include <iostream>
using namespace std;

int main() {
    char alphabet;
    cout << "Enter Alphabet: ";
    cin >> alphabet;

    char lowerAlphabet = tolower(alphabet);

    if (lowerAlphabet == 'a' || lowerAlphabet == 'e' || lowerAlphabet == 'i' || lowerAlphabet == 'o' || lowerAlphabet == 'u') {
        cout << alphabet << " is a Vowel" << endl;
    } else {
        cout << alphabet << " is a Consonant" << endl;
    }

    return 0;
}
