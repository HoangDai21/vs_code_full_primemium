#include <iostream>
using namespace std;

class hocsinh{
    private:
    string mahocsinh; 
    string hoten; 
    string lop; 
    double toan;
    public:
    void nhaptt();
    void xuattt();
    hocsinh(string mahocsinh, string hoten, string lop, double toan){
        this ->mahocsinh = mahocsinh;
        this ->hoten = hoten;
        this ->lop = lop;
        this ->toan = toan;
    } 
};
void hocsinh::nhaptt(){
    cout << "nhap ma hoc sinh: ";
    cin >> mahocsinh;
    cout << "nhap ho ten: ";
    cin >> hoten;
    cout << "nhap lop: ";
    cin >> lop;
    cout << "nhap diem toan: ";
    cin >>toan;
}
void hocsinh::xuattt(){
    cout << "ma hoc sinh la: " << mahocsinh <<endl;
    cout << "ho ten la: " <<hoten <<endl;
    cout << "lop: " <<lop <<endl;
    cout << "diem toan la: " <<toan <<endl;
}


int main(){
    hocsinh a();
    a.nhaptt();
    a.xuattt();
}