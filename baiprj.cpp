#include <iostream>
#include <cstring>
#include <iomanip>
#include <algorithm>

using namespace std;

// Định nghĩa cấu trúc hộ dân
struct HoDan {
    char maHo[5];
    char tenChuHo[25];
    int soThanhVien;
    float mucThuNhap;
};

// Hàm nhập thông tin của một hộ dân
void NhapThongTinHoDan(HoDan *hoDan) {
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

// Hàm nhập thông tin danh sách hộ dân
void NhapDanhSachHoDan(HoDan *danhSach, int soHoDan) {
    for (int i = 0; i < soHoDan; i++) {
        cout << "\nNhap thong tin ho dan thu " << i + 1 << ":\n";
        NhapThongTinHoDan(&danhSach[i]);
    }
}

// Hàm in thông tin của một hộ dân
void inThongTinHoDan(const HoDan &hoDan) {
    cout << "Ma ho: " << hoDan.maHo << endl;
    cout << "Ten chu ho: " << hoDan.tenChuHo << endl;
    cout << "So thanh vien: " << hoDan.soThanhVien << endl;
    cout << "Muc thu nhap: " << fixed << setprecision(2) << hoDan.mucThuNhap << endl;
}

// Hàm hiển thị danh sách hộ dân
void hienThiDanhSachHoDan(const HoDan *danhSach, int soHoDan) {
    for (int i = 0; i < soHoDan; i++) {
        cout << "\nThong tin ho dan thu " << i + 1 << ":\n";
        inThongTinHoDan(danhSach[i]);
    }
}

// Hàm sửa thông tin của một hộ dân
void suaThongTinHoDan(HoDan &hoDan) {
    cout << "Sua thong tin ho dan co ma ho " << hoDan.maHo << ":\n";
    NhapThongTinHoDan(&hoDan);
}

// Hàm sửa thông tin danh sách hộ dân
void suaDanhSachHoDan(HoDan *danhSach, int soHoDan) {
    char maHo[5];
    cout << "Nhap ma ho cua ho dan can sua: ";
    cin >> maHo;

    for (int i = 0; i < soHoDan; i++) {
        if (strcmp(danhSach[i].maHo, maHo) == 0) {
            suaThongTinHoDan(danhSach[i]);
            return;
        }
    }

    cout << "Khong tim thay ho dan co ma ho " << maHo << endl;
}

// Hàm chèn thông tin của một hộ dân mới vào danh sách hộ dân
void chenHoDan(HoDan *&danhSach, int &soHoDan, const HoDan &hoDan, int viTri) {
    if (viTri < 0 || viTri > soHoDan) {
        cout << "Vi tri khong hop le!\n";
        return;
    }

    HoDan *danhSachMoi = new HoDan[soHoDan + 1];

    for (int i = 0; i < viTri; i++) {
        danhSachMoi[i] = danhSach[i];
    }

    danhSachMoi[viTri] = hoDan;

    for (int i = viTri; i < soHoDan; i++) {
        danhSachMoi[i + 1] = danhSach[i];
    }

    delete[] danhSach;
    danhSach = danhSachMoi;
    soHoDan++;
}

// Hàm sắp xếp hộ dân theo thứ tự bảng chữ cái tính theo tên
void sapXepHoDan(HoDan *danhSach, int soHoDan) {
    sort(danhSach, danhSach + soHoDan, [](const HoDan &a, const HoDan &b) {
        return strcmp(a.tenChuHo, b.tenChuHo) < 0;
    });
}

// Hàm tính số tiền nộp thuế mà mỗi hộ phải nộp
void tinhThue(const HoDan *danhSach, int soHoDan) {
    cout << "\nDanh sach ho va so thue can nop:\n";
    for (int i = 0; i < soHoDan; i++) {
        float thue;
        if (danhSach[i].soThanhVien == 3) {
            thue = 2.0f * danhSach[i].soThanhVien;
        } else if (danhSach[i].soThanhVien == 4) {
            thue = 2.5f * danhSach[i].soThanhVien;
        } else if (danhSach[i].soThanhVien >= 5) {
            thue = 3.0f * danhSach[i].soThanhVien;
        } else {
            thue = 0.0f;
        }

        cout << "Ten chu ho: " << danhSach[i].tenChuHo << " - So thue can nop: " << fixed << setprecision(2) << thue << " trieu dong" << endl;
    }
}

// Hàm menu chính
void menu() {
    cout << "\nCHUONG TRINH QUAN LY HO DAN\n";
    cout << "1. Nhap thong tin danh sach ho dan\n";
    cout << "2. Hien thi thong tin danh sach ho dan\n";
    cout << "3. Sua thong tin ho dan\n";
    cout << "4. Chen thong tin ho dan moi\n";
    cout << "5. Sap xep danh sach ho dan theo ten\n";
    cout << "6. Tinh thue can nop cua cac ho dan\n";
    cout << "0. Thoat chuong trinh\n";
    cout << "Lua chon cua ban: ";
}

int main() {
    int soHoDan = 0;
    HoDan *danhSach = new HoDan[100];  // Khởi tạo mảng lớn để tránh sử dụng nullptr
    bool danhSachKhoiTao = false;

    while (true) {
        menu();
        int luaChon;
        cin >> luaChon;

        if (luaChon == 0) {
            break;
        }

        switch (luaChon) {
            case 1:
                if (danhSachKhoiTao) {
                    cout << "Danh sach da duoc khoi tao.\n";
                } else {
                    cout << "Nhap so luong ho dan: ";
                    cin >> soHoDan;
                    cin.ignore();
                    NhapDanhSachHoDan(danhSach, soHoDan);
                    danhSachKhoiTao = true;
                }
                break;
            case 2:
                if (danhSachKhoiTao) {
                    hienThiDanhSachHoDan(danhSach, soHoDan);
                } else {
                    cout << "Danh sach chua duoc khoi tao.\n";
                }
                break;
            case 3:
                if (danhSachKhoiTao) {
                    suaDanhSachHoDan(danhSach, soHoDan);
                } else {
                    cout << "Danh sach chua duoc khoi tao.\n";
                }
                break;
            case 4: {
                if (danhSachKhoiTao) {
                    HoDan hoDanMoi;
                    cout << "\nNhap thong tin ho dan moi:\n";
                    NhapThongTinHoDan(&hoDanMoi);
                    int viTriChen;
                    cout << "Nhap vi tri can chen (0-" << soHoDan << "): ";
                    cin >> viTriChen;
                    chenHoDan(danhSach, soHoDan, hoDanMoi, viTriChen);
                } else {
                    cout << "Danh sach chua duoc khoi tao.\n";
                }
                break;
            }
            case 5:
                if (danhSachKhoiTao) {
                    sapXepHoDan(danhSach, soHoDan);
                    cout << "Danh sach ho dan sau khi sap xep:\n";
                    hienThiDanhSachHoDan(danhSach, soHoDan);
                } else {
                    cout << "Danh sach chua duoc khoi tao.\n";
                }
                break;
            case 6:
                if (danhSachKhoiTao) {
                    tinhThue(danhSach, soHoDan);
                } else {
                    cout << "Danh sach chua duoc khoi tao.\n";
                }
                break;
            default:
                cout << "Lua chon khong hop le! Vui long chon lai.\n";
                break;
        }
    }

    delete[] danhSach;

    return 0;
}
