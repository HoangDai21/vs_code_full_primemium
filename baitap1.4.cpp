#include <iostream>
using namespace std;

class CongDan{
    protected:
        string hoTen;
        string CCCD;
        int tuoi;
    public:
        CongDan(string hoTen = "", string CCCD = "", int tuoi = 0){
            this -> hoTen = hoTen;
            this -> CCCD = CCCD;
            this -> tuoi = tuoi;
        }
        ~CongDan(){
         
        }
        void virtual nhap(){
            cout << "Nhap ho ten: ";
            getline(cin, hoTen);
            cout << "Nhap so CMND: ";
            getline(cin, CCCD);
            cout << "Nhap tuoi: ";
            cin >> tuoi;
            cin.ignore();
        }
        void virtual xuat(){
            cout << "Ho ten: " << hoTen << endl;
            cout << "So CMND: " << CCCD << endl;
            cout << "Tuoi: " << tuoi << endl;
        }
        string getCCCD(){
            return CCCD;
        }
        string getHoTen(){
            return hoTen;
        }
        string gethoNguyen(){
            return hoTen;
        }
};
class HocSinh : public CongDan{
    private:
        float diemToan;
        float diemVan;
    public:
        HocSinh(string hoTen = "", string soCMND = "", int tuoi = 0, float diemToan = 0, float diemVan = 0) : CongDan(hoTen, soCMND, tuoi){
            this -> diemToan = diemToan;
            this -> diemVan = diemVan;
        }
        ~HocSinh();
        void nhap(){
            CongDan::nhap();
            cout << "Nhap diem toan: ";
            cin >> diemToan;
            cout << "Nhap diem van: ";
            cin >> diemVan;
            cin.ignore();
        }
        void xuat(){
            CongDan::xuat();
            cout << "Diem toan: " << diemToan << endl;
            cout << "Diem van: " << diemVan << endl;
        }
};
class GiaoVien : public CongDan{
    private:
        string chuyenNganh;
        float heSoLuong;
    public:
        GiaoVien(string hoTen = "", string soCMND = "", int tuoi = 0, string chuyenNganh = "", float heSoLuong = 0) : CongDan(hoTen, soCMND, tuoi){
            this -> chuyenNganh = chuyenNganh;
            this -> heSoLuong = heSoLuong;
        }
        ~GiaoVien();
        void nhap(){
            CongDan::nhap();
            cout << "Nhap chuyen nganh: ";
            getline(cin, chuyenNganh);
            cout << "Nhap he so luong: ";
            cin >> heSoLuong;
            cin.ignore();    
        }
        void xuat(){
            CongDan::xuat();
            cout << "Chuyen nganh: " << chuyenNganh << endl;
            cout << "He so luong: " << heSoLuong << endl;
        }
};
void nhapdanhsachHocsinh(CongDan *cd[], int n){
    for (int i = 0; i < n; i++){
        cd[i]= new HocSinh();
        cd[i] -> nhap();
    }
}
void indanhsachHocsinh(CongDan *cd[], int n){
    for (int i = 0; i < n; i++){
        cd[i] -> xuat();
        cout << endl;
    }
}
void danhsachCCCDnhoon1234(CongDan *cd[], int n){
    for (int i = 0; i < n; i++){
        if (cd[i] -> getCCCD() < "1234"){
            cd[i] -> xuat();
            cout << endl;
        }else {
            cout << "Khong co CCCD nho hon 1234" << endl;
        }
    }
}
void xapxeptheochieutangdanCCCD(CongDan *cd[], int n){
    for (int i = 0; i < n -1; i++){
        for (int j = i + 1; j < n; j++ ){
            if(cd[i]->getCCCD() > cd[j]->getCCCD()){
                CongDan *temp = cd[i];
                cd[i] = cd[j];
                cout<< "Danh sach sau khi sap xep: " << endl;
            }
        }
    }
}
void indanhsachhstenHung(CongDan *cd[], int n){
    for (int i = 0; i < n; i++){
        if (cd[i] -> getHoTen() == "Hung"){
            cd[i] -> xuat();
            cout << endl;
        }else {
            cout << "Khong co ten Hung trong danh sach" << endl;
        }
    }
}
void indanhsachhsHoNguyrn(CongDan *cd[], int n){
    for (int i = 0; i < n; i++){
        if(cd[i] ->getHoTen() == "Nguyen")
            cout << "Ho ten Nguyen co trong danh sach" << endl;
            cd[i] -> xuat();
            cout << endl;
    }
}
void nhapdanhsachgiaovien(CongDan *cd[], int n){
    for (int i = 0; i < n; i++){
        cd[i] = new GiaoVien();
        cd[i] -> nhap();
    }
}
void indanhsachgiaovien(CongDan *cd[], int n){
    for (int i = 0; i < n; i++){
        cd[i] -> xuat();
        cout << endl;
    }
}
void timkiemgiaoviencosoCCCDnhaptuphim(CongDan *cd[], int n){
    string CCCD;
    cout << "Nhap CCCD can tim: ";
    getline(cin, CCCD);
    for (int i = 0; i < n; i++){
        if (cd[i] -> getCCCD() == CCCD){
            cd[i] -> xuat();
            cout << endl;
        }else {
            cout << "Khong co CCCD nay trong danh sach" << endl;
        }
    }
}

int main(){
    CongDan* cd[0];
    int n;
    do
    {
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;       
    } while (n <= 0);
    cout << "Nhap danh sach hoc sinh: " << endl;
    nhapdanhsachHocsinh(cd, n);
    cout << "Danh sach hoc sinh: " << endl;
    indanhsachHocsinh(cd, n);
    cout << "Danh sach CCCD nho hon 1234: " << endl;
    danhsachCCCDnhoon1234(cd, n);
    cout << "Nhap danh sach giao vien: " << endl;   
    nhapdanhsachgiaovien(cd, n);
    cout << "Danh sach giao vien: " << endl;
    indanhsachgiaovien(cd, n);
    cout << "Nhap CCCD can tim: " << endl;
    timkiemgiaoviencosoCCCDnhaptuphim(cd, n);
    return 0;
}