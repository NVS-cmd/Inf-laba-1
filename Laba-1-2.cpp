#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int p = 1;
    cout << "Введите число: ";
    cin >> i;
    while (i >= 1){
        p = i * p;
        i = i - 1;
    }
    cout << p << endl;
    return 0;

}