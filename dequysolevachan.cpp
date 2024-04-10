#include <iostream>
using namespace std;

struct chanle
{
  int n;
  int timsochan(int n){
    if ( n < 1)
    return n;
    else if(n %2 != 0){
        return n + timsochan(n - 1);
    }
    else {
        return -n + timsochan(n - 1);
    }
  }
  int timsole(int n){
    if (n <= 1)
    return n;
    if(n % 2 == 0)
    {
        return -n + timsole(n - 1);
    }
    else
    {
        return n + timsole(n - 1);
    }
  }
  void nhap(){
    cout << "moi nhap n: ";cin >> n; 
  }
  void xuat(){ 
//    cout << "gia tri tong so le 1 -> n: " << -1 * n / 2 + (n % 2) * n<<endl;
    cout << "gia tri hieu chan: "<<timsochan(n)<<endl;
    cout << "gia tri tong le: "<<timsole(n);
  }
};

int main(){
    chanle a;
    a.nhap();
    a.xuat();
    return 0;
}