#include <iostream>
using namespace std;

int main ()
{
    float s = 0.0;
    double a;
    int n = 1;
    cout << "nhap a: "; cin >>a;
    while (s <= a){
        s  += 1.0/n;
        n++;
    }
    cout << "gia tri nho nhat cua n la : "<< n - 1<<endl;
    cout << "gia tri cua s la : "<< s<< endl;
    return 0;
}
