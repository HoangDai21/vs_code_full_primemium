#include<iostream>
using namespace std;
// sum = 1 + 2 + 3 +...+ (n - 1) + n

int tinhdequy(int n){
    if (n <= 0)
    return 0;
    else 
    return tinhdequy(n - 1) + n;
}
int main (){
    int n;
    cout << "moi nhap n: ";
    cin >> n;
    cout << "gia tri cua tong s = 1 + 2 + 3 +...+ ("<<n<<" - 1) + "<<n <<" la:  " << tinhdequy(n);
}