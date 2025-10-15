#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    string str = to_string(num);
    cout << "Число як строка: " << str << endl;

    return 0;
}
