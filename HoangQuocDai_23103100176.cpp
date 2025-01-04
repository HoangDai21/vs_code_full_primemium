#include <iostream>
using namespace std;

class HangHoa{
    protected:
        int Mahang;
        string Tenhang;
        string Donvitinh;
    public:
        HangHoa(int Mahang = 0, string Tenhang = " ", string Donvitinh = " " ){
            this-> Mahang = Mahang;
            this-> Tenhang = Tenhang;
            this-> Donvitinh = Donvitinh;
        }
        // ~HangHoa();
        void virtual nhap(){
            cout << "moi nhap ma hang hoa: ";
            cin >> Mahang;
            cout  << "moi nhap ten hang: ";  
            getline(cin, Tenhang);
            cout << "moi nhap don vi tinh: ";
            getline(cin, Donvitinh);           
        }
        void virtual xuat(){
            cout << "ma hang hoa la: " << Mahang <<endl;
            cout << "ten hang hoa la: " << Tenhang <<endl;
            cout << "don vi tinh la: " << Donvitinh <<endl;
        }
        
        string getTenhang(){
            return Tenhang;
        }
        int getMahang(){
            return Mahang;
        }
};    
class ThucPham : public HangHoa{
    protected:
        int soluong;
        double dongia;
    public:
        ThucPham(int soluong = 0, double dongia = 0){
            this->soluong = soluong;
            this->dongia = dongia;
        }
        void nhap(){
            HangHoa::nhap();
            cout << "moi nhap so luong thuc pham: ";
            cin >> soluong;
            cout  << "moi nhap don gia thuc pham: ";
            cin >> dongia;
        }
        void xuat(){
            HangHoa::xuat();
            cout << "so luong thuc pham la: " << soluong <<endl;
            cout << "dong gia thuc pham la: " << dongia <<endl;
        }
        int getsoluong(){
            return soluong;
        }
};
class DoDaDung : public HangHoa{
    protected:
        string model;
        int namsx;
    public:
       void ThucPham(string model = " ", int namsx = 0){
            this->model = model;
            this->namsx = namsx;
        }
        void nhap(){
            HangHoa::nhap();
            cout << "moi nhap so model: ";
            getline(cin,model);
            fflush(stdin);
            cout  << "moi nhap nam san xuat: ";
            cin >> namsx;
        }
        void xuat(){
            HangHoa::xuat();
            cout << "moi nhap so model: " << model <<endl;
            cout  << "moi nhap nam san xuat: " << namsx <<endl;
        } 
};
void nhapdanhsachHanghoa(HangHoa *a[], int m){
    for (int i = 0; i < m; i++){
        a[i] = new HangHoa();
        a[i]->nhap();
    }
}
void tpnhohon50(ThucPham *b[], int m){
    for(int i = 0; i < m; i++){
        if(b[i]->getsoluong() >= 50)
        b[i]->xuat();
    }
}
void inGao(HangHoa *a[], int m){
    for (int i = 0; i < m; i++){
        if (a[i] -> getTenhang() == "Gao"){
            a[i] -> xuat();
            cout << endl;
        }else {
            cout << "Khong co ten Gao trong danh sach" << endl;
        }
    }
}
void nhapdodadung(HangHoa *a[], int n){
    cout << "nhap so do da dung: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        a[i]->nhap();
        cout << endl;
    }
}
void xuatdodadung(HangHoa *a[], int n){
    for(int i = 0; i < n; i++){
        a[i]->xuat();
        cout << endl;
    }
}
void sapxepDodadung(HangHoa *a[], int n){
    for (int i = 0; i < n -1; i++){
        for (int j = i + 1; j < n; j++ ){
            if(a[i]->getMahang() > a[j]->getMahang()){
                HangHoa *temp = a[i];
                a[i] = a[j];
                cout<< "Danh sach sau khi sap xep: " << endl;
            }
        }
    }
}
void timkiemDodadung(HangHoa *a[], int n){
    int mahang;
    cout << "nhap ma hang can tim: ";
    cin >> mahang;
    for (int i = 0; i < n; i++){
        if(a[i]->getMahang() == mahang){
            a[i]->xuat();
            cout << endl;
        }
    }
}

int main(){
    HangHoa* a[10];
    ThucPham* b[0];
    int n;
    int m;
    cout << "nhap so luong thuc pham: ";
    cin >> m;
    cout << "_______________________ "<<endl;
    nhapdanhsachHanghoa(a,m);
    tpnhohon50(b,m);
    inGao(a,m);
    nhapdodadung(a,n);
    xuatdodadung(a,n);
    sapxepDodadung(a,n);
    timkiemDodadung(a,n);
    return 0;
}
