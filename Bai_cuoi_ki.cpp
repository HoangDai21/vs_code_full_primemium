#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct HoDan{
    char maHo[5];
    char tenChuHo[25];
    int soThanhVien;
    float mucThuNhap;
};

void TieuDe() {
    cout << "._______________________________________________________________.\n"
         << "|  Ma Ho  |        Ten Chu Ho         | Thanh Vien |  Thu Nhap  |\n"
         << "|_________|___________________________|____________|____________|\n";
}
// Ham nhap thong tin cua mot ho dan
void NhapThongTinHoDan(HoDan *hoDan){
    cout << "Nhap ma ho (toi da 4 ky tu): ";
    cin >> hoDan->maHo;
    cin.ignore();
    cout << "Nhap ten chu ho: ";
    cin.getline(hoDan->tenChuHo, 25);
    cout << "Nhap so thanh vien: ";
    cin >> hoDan->soThanhVien;
    cout << "Nhap muc thu nhap: ";
    cin >> hoDan->mucThuNhap;
}
// Ham nhap danh sach ho dan
void NhapDanhSachHoDan(HoDan *danhSach, int n){
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin ho dan thu " << i + 1 << ":\n";
        NhapThongTinHoDan(&danhSach[i]);
    }
}
// Ham in thong tin cua ho dan
void inThongTinHoDan(HoDan hoDan){
    cout << "|" << setw(9) << hoDan.maHo
         << "|" << setw(27) << hoDan.tenChuHo
         << "|" << setw(12) << hoDan.soThanhVien
         << "|" << setw(12) << hoDan.mucThuNhap << "|\n";
}
// Ham hien thi danh sach ho dan
void hienThiDanhSachHoDan(HoDan *danhSach, int n){
    TieuDe();
    for (int i = 0; i < n; i++) {
        inThongTinHoDan(danhSach[i]);
    }
    cout << "|_______________________________________________________________|\n";
}
// Ham sua thong tin cua mot ho dan
void suaThongTinHoDan(HoDan &hoDan) {
    cout << "Sua thong tin ho dan co ma ho " << hoDan.maHo << ":\n";
    NhapThongTinHoDan(&hoDan);
}
// Ham sua thong tin danh sach ho dan
void suaDanhSachHoDan(HoDan *danhSach, int n){
    char maHo[5];
    cout << "Nhap ma ho cua ho dan can sua: ";
    cin >> maHo;
    for (int i = 0; i < n; i++){
        if (strcmp(danhSach[i].maHo, maHo) == 0){
            suaThongTinHoDan(danhSach[i]);
            return;
        }
    }
    cout << "Khong tim thay ho dan co ma ho " << maHo << endl;
}
// Ham chen thong tin cua mot ho dan moi vao danh sach ho dan
void chenHoDan(HoDan *&danhSach, int &n, HoDan &hoDan, int viTri){
    if (viTri < 0 || viTri > n){
        cout << "Vi tri khong hop le!\n";
        return;
    }
    HoDan *danhSachMoi = new HoDan[n + 1];
    for (int i = 0; i < viTri; i++){
        danhSachMoi[i] = danhSach[i];
    }
    danhSachMoi[viTri] = hoDan;
    for (int i = viTri; i < n; i++){
        danhSachMoi[i + 1] = danhSach[i];
    }
    delete[] danhSach;
    danhSach = danhSachMoi;
    n++;
}
// Ham sap xep ho dan theo thu tu bang chu cai tinh theo ten
void sapXepHoDan(HoDan *danhSach, int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (strcmp(danhSach[i].tenChuHo, danhSach[j].tenChuHo) > 0){
                swap(danhSach[i], danhSach[j]);
            }
        }
    }
}
// Ham tinh so tien nop thue ma moi ho phai nop
void tinhThue(HoDan *danhSach, int n){
    cout << "\n._____________________________________________.\n"
         << "|     Ten Chu Ho       |         Thue         |\n"
         << "|______________________|______________________|\n";
    for (int i = 0; i < n; i++){
        float thue;
        if (danhSach[i].soThanhVien == 3){
            thue = 2.0 * danhSach[i].soThanhVien;
        } else if (danhSach[i].soThanhVien == 4){
            thue = 2.5 * danhSach[i].soThanhVien;
        } else if (danhSach[i].soThanhVien >= 5){
            thue = 3.0 * danhSach[i].soThanhVien;
        } else {
            thue = 0.0;
        }
        cout << "|" << setw(22) << danhSach[i].tenChuHo
             << "|" << setw(9) << fixed  << thue << " trieu dong |\n";
    }
    cout << "|______________________|______________________|\n";
}
void menu() {
    cout << "\n-----------Menu----------\n";
    cout << "1. Nhap danh sach ho dan\n";
    cout << "2. Hien thi danh sach ho dan\n";
    cout << "3. Sua thong tin ho dan\n";
    cout << "4. Chen ho dan moi\n";
    cout << "5. Sap xep ho dan theo ten\n";
    cout << "6. Tinh thue cac ho dan\n";
    cout << "0. Thoat\n";
    cout << "Nhap lua chon: ";
}
int main() {
    int n = 0;
    HoDan *danhSach = new HoDan[100];  // khoi tao mang lon
    bool DanhSachHoDan = false;
    while (true) {
        menu();
        int luaChon;
        cin >> luaChon;
        if (luaChon == 0) {
            break;
        }
        switch (luaChon) {
            case 1:
                if (DanhSachHoDan){
                    cout << "Danh sach da duoc khoi tao\n";
                } else {
                    cout << "Nhap so luong ho dan: ";
                    cin >> n;
                    cin.ignore();
                    NhapDanhSachHoDan(danhSach, n);
                    DanhSachHoDan = true;
                }
                break;
            case 2:
                if (DanhSachHoDan){
                    hienThiDanhSachHoDan(danhSach, n);
                } else {
                    cout << "Danh sach chua duoc khoi tao\n";
                }
                break;
            case 3:
                if (DanhSachHoDan){
                    suaDanhSachHoDan(danhSach, n);
                } else {
                    cout << "Danh sach chua duoc khoi tao\n";
                }
                break;
            case 4: {
                if (DanhSachHoDan){
                    HoDan hoDanMoi;
                    cout << "\nNhap thong tin ho dan moi:\n";
                    NhapThongTinHoDan(&hoDanMoi);
                    int viTriChen;
                    cout << "Nhap vi tri can chen (0-" << n << "): ";
                    cin >> viTriChen;
                    chenHoDan(danhSach, n, hoDanMoi, viTriChen);
                } else {
                    cout << "Danh sach chua duoc khoi tao\n";
                }
                break;
            }
            case 5:
                if (DanhSachHoDan){
                    sapXepHoDan(danhSach, n);
                    cout << "Danh sach ho dan sau khi sap xep:\n";
                    hienThiDanhSachHoDan(danhSach, n);
                } else {
                    cout << "Danh sach chua duoc khoi tao\n";
                }
                break;
            case 6:
                if (DanhSachHoDan){
                    tinhThue(danhSach, n);
                } else {
                    cout << "Danh sach chua duoc khoi tao\n";
                }
                break;
            default:
                cout << "Lua chon khong hop le! Vui long chon lai\n";
                break;
        }
    }
    return 0;
}
