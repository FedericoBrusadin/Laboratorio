#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Inserire una lettera dell'alfabeto: " << endl;
    cin >> c;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout << "La lettera e' una vocale" << endl;
                break;

            default:
                cout << "La lettera e' una consonante" << endl;
                break;
        }
    } else {
        cout << "Input errato" << endl;
    }

    return 0;
}