#include <iostream>

using namespace std;

int main() {
    int kilos;
    cin >> kilos;
    (kilos % 2 == 0 && kilos != 2)? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
