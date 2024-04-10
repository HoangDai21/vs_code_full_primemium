#include  <iostream>
using namespace std;

int main (){
    int a[5] ;
    int n;
    cout << "nhap n: ";cin >> n;
    for ( int i = 0; i < n; i++){
        cout << "nhap phan tu thu "<<i<<" cua mang : ";
        cin >> a[i];
    }
    for ( int i = 0; i < n; i++)
    cout << "gia tri thu "<<i <<" cua mang a la "<<a[i]<<endl;
    return 0;
}