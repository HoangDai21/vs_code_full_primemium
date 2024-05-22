#include<iostream>
using namespace std;

struct Ho_Dan {
    char Ma_Ho[5];
    char Ten_Chu_Ho[25];
    int So_Thanh_Vien;
    float Muc_Thu_Nhap;
};

void NhapTT(Ho_Dan *Ho_Dan){
        cout << "Nhap Ma Ho: ";
        cin.getline(Ho_Dan-> Ma_Ho,5);
        cout << "Nhap Ten Chu Ho: ";
        cin.getline(Ho_Dan->Ten_Chu_Ho,25);
        cout << "Nhap So Thanh Vien: ";
        cin >> Ho_Dan->So_Thanh_Vien;
        cout << "Nhap Muc Thu Nhap: ";
        cin >> Ho_Dan->Muc_Thu_Nhap;
}
