#include <iostream>
using namespace std;
int tinhX(int n) {
    if (n == 0) {
        return 1;
    }
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += (n - i) * (n - i) * tinhX(i);
    }
    return s;
}
int main() {
    int n;
    cout << "nhap gia tri cua n: "; cin >> n;
    cout << "gia tri cua  x(" << n << ") la: " <<tinhX(n) <<endl;
    return 0;
}