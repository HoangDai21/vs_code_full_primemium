#include<iostream>
using namespace std;

struct dequy{
    int n;
    int tinhdequy(int n){
        if (n <= 0)
        return 0;
        else 
    return tinhdequy(n - 1) + n;
    }
    void nhap(){
        cout << "moi nhap n : ";cin >> n;
    }
    void xuat(){
        cout << n;
    }
};
int main(){ 
    dequy a;
    int n;
    cout << "moi nhap n: ";
    cin >> n;
    cout << "la: ";
    cout <<a.tinhdequy(n);
    return 0;
}