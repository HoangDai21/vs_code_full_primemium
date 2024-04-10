#include<iostream>
using namespace std;

class vuive{
    private:
        char ten[30];
        int tuoi;
        float toan,ly,hoa;
    public:
        void nhap();
        void xuat(); 
        float tbc();
};
void vuive::nhap(){
    cout << "nhap ten: ";
    cin.getline(ten,30);
    cout << "nhap tuoi: ";
    cin >> tuoi;
    cout << "nhap diem toan: ";
    cin >> toan;
    cout << "nhap diem ly: ";
    cin >> ly;
    cout << "nhap diem hoa: ";
    cin >> hoa;
}
void vuive::xuat(){
    cout << "dayladongkekhongaithayca"<<endl;
    cout << "ten cua ban la: "<<ten << endl;
    cout << "tuoi cua ban la: "<<tuoi <<endl;
    cout << "diem toan cua ban la: "<<toan <<endl;
    cout << "diem toan cua ban la: "<<ly <<endl;
    cout << "diem toan cua ban la: "<<hoa <<endl;
}
float vuive::tbc(){
    return (toan+ly+hoa)/3;
}

int main(){
    vuive a;
    a.nhap();
    a.xuat();
    cout << "diem trung binh cua ban la: "<<a.tbc();
}