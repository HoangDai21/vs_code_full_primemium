#include <iostream>
using namespace std;
#define max 100
int main(){
    int a[max];
    int n;
    float s;
    int sole = 0;
    cout << "moi nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "gia tri thu "<<i<<" la: ";
        cin >> a[i];
        s += a[i];
        if(a[i] %2 != 0){
            sole ++;
        }
    }
    cout << "gia tri tong cua mang la: "<< s <<endl; 
    cout << sole;
}