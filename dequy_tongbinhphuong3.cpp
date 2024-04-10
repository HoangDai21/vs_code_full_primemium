#include<iostream>
#include<cmath>
using namespace std;
int tongbinhphuong(int n)
{
    if(n == 1)
        return 1;
    return (float)pow(n, n) * tongbinhphuong(n - 1); 
}
int main()
{
    int n;
    cout<<"nhap so n: "; cin>>n;
    cout<<"tong day binh phuong tren la: "<<tongbinhphuong(n)<<endl;
    system("pause");
}