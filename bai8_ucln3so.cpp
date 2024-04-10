#include <iostream>
using namespace std;

// int ucln(int a, int b){
//     while(a != b){
//         if(a > b){
//             a = a - b;
//         }
//          b = b - a;
//     }
//     return a;
// }
int ucln(int a, int b){
    if(b == 0)
        return a;
        return ucln(b, a%b);
}
int main(){
    int a,b,c;
    cout << "moi nhap a: ";
    cin >> a;
    cout << "moi nhap b: ";
    cin >> b;
    cout << "moi nhap c: ";
    cin >> c;
    ucln(a,b);
    int kq = ucln(a,b);
    kq = ucln(kq,c);
    cout << "ucln cua ba so la: "<<kq;
}
