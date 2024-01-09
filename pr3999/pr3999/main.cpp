#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int namber;
    cout << "ведите число: ";
    cin >> namber;
    for (int i = 1; i <= 10; i++) {
        cout << i << " + " << namber << " = " << i + namber << endl;
    }
    return 0;
}