#include<iostream>
using namespace std;

class vuive{
    private:
        char ten[30];
        int tuoi;
    public:
        void nhap();
        void xuat();
};
void vuive::nhap(){
    cout << "nhap ten: ";
    cin.getline(ten,30);
    cout << "nhap tuoi: ";
    cin >> tuoi;
}
void vuive::xuat(){
    cout << "ten cua ban la: "<<ten << endl;
    cout << "tuoi cua ban la: "<<tuoi;
}
int main(){
    vuive a;
    a.nhap();
    a.xuat();
}