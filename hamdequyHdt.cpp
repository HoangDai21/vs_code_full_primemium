#include<iostream>
using namespace std;
//tu 1 -> n so le thi + 
//         ; so chan thi - di
struct dequy{
    int n;
    int giaithua(int n){
        if (n <= 2)
        return n;
        else
        return n * giaithua(n - 1);
    }
    void nhap(){
        cout << "moi nhap n : ";cin >> n;
    }
   void xuat(){
        cout << "giai thua cua "<<n<<" la: "<<giaithua(n);
   }
};
int main(){ 
    dequy a;
    int n;
    a.nhap();
    a.xuat();
    return 0;
}