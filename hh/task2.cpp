#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    if (num > 0) {
        cout << "Число додатнє\n";
    } else if (num < 0) {
        cout << "Число від’ємне\n";
    } else {
        cout << "Число дорівнює нулю\n";
    }

    return 0;
}
