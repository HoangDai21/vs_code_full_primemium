#include <iostream>
using namespace std;

int main() {
    float t,n,ls;
    cout << "Nhap tien goc: "; cin >> t;
    cout << "Nhap lai hang thang: "; cin >> ls;
    cout << "Nhap so thang: "; cin >> n;
    int i = 1;
    while (i<=n) {
        t = t + t*(ls/100);
        i++;
    }
    cout << "So tien nhan duoc: " << t;
    return 0;
}