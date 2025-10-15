#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    if (a > b) swap(a, b); // щоб a було менше або рівне b

    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0)
            sum += i;
    }

    cout << "Сума парних чисел у діапазоні: " << sum << endl;
    return 0;
}
