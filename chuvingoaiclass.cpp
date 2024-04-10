#include<iostream>
using namespace std;
class hcn{
    private:
        float d,r;
    public:
        void nhap();
        void xuat();
        float chuvi(), dientich();
};
void hcn::nhap(){
    cout << "nhap chieu dai: ";
    cin >> d;
    cout << "nhap chieu rong: ";
    cin >> r;
}
void hcn::xuat(){
    cout << "chieu dai la: "<< d <<endl;
    cout << "chieu rong la: "<< r <<endl;
}
float hcn::chuvi(){
    return (d+r)*2;
}
float hcn::dientich(){
    return d*r;
}
int main(){
    hcn a;
    a.nhap();
    a.xuat();
    cout << "chu vi hinh chu nhat la: "<<a.chuvi() << endl;
    cout << "dien tich hinh chu nhat la: "<<a.dientich();
}