#include<iostream>
uisng namespace std;

struct Ho_Dan {
    char Ma_Ho[5];
    char Ten_Chu_Ho[25];
    int So_Thanh_Vien;
    float Muc_Thu_Nhap;
};

void NhapTT(Ho_Dan*Ho_Dan, int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap Ma Ho: ";
        cin.getline(Ho_Dan->Ho_Dan,5);
    }
}